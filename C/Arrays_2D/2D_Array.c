#include <stdio.h>
#define ROW 5
#define COL 5
int main() {
    int arr_2d[ROW][COL] = {0};
    int i, j;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", arr_2d[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}