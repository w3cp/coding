#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col;
    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
           namta[row][col] = (row + 1) * (col + 1);
        }
    }
    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
           printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
        printf("\n");
    }
    return 0;
}
