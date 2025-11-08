#include <stdio.h>
#define ROW 30
#define COL 10

int main() {

    int grades_2D[ROW][COL];
    int total;

    //Initialization
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            grades_2D[i][j] = 0;
        }
    }
    //Sequentially assigning Grades to 30 students in 10 Subjects
    for (int i = 0; i < ROW; i++) 
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Grade %2d: ", j + 1);
            scanf("%d", &grades_2D[i][j]);
        }
    }
    //Printing the Final grades of Each Student
    for (int i = 0; i < ROW; i++)
    {
        total = 0;
        printf("Student %d: ", i + 1);
        for (int j = 0; j < COL; j++)
        {
            total += grades_2D[i][j];
            printf("%2d ", grades_2D[i][j]);
        }
        
        printf("Total: %3d\n", total);
    }

    return 0;
}