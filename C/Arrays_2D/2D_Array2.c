#include <stdio.h>
#define ROW 5
#define COL 3

int main() {

    int grades_2D[ROW][COL] = {0};
    int total;
    //Sequentially assigning Grades to 5 students in 3 Subjects
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