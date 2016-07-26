#include <stdio.h>

int main()
{
    int namta[10][10];
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            namta[i][j] = (i + 1) * (j + 1);
            printf("%d x %d = %d\n", i + 1, j + 1, namta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
