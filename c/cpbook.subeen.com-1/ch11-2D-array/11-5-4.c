#include <stdio.h>

int main()
{
    int ara[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};
    int row, col;
    int ara2[5][5];
    for (row = 0; row < 5; row++) {
        for (col = 0; col < 5; col++) {
            ara2[col][row] = ara[row][col];
        }
    }
    for (row = 0; row < 5; row++) {
        for (col = 0; col < 5; col++) {
            printf("%2d", ara2[row][col]);
        }
        printf("\n");
    }
    return 0;
}
