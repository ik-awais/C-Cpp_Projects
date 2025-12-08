#include <stdio.h>
#define ROW 29
#define COL 6
int main() {
    int days[ROW][COL];
    int i, j ,sum, sum1 = 0; 

    for (i = 0; i < ROW; i++) 
    {
        sum = 0;
        for (j = 0; j < COL; j++) {
            days[i][j] = j;
            days[i][0] = i + 1;
            printf("%2d ", days[i][j]);
            sum += days[i][j];
        }
        printf("Sum: %3d", sum);
        sum1 += sum;
        printf("\n");
    }
    printf("SUM: %3d\n", sum1);

    return 0;
}