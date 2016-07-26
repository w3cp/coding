#include <stdio.h>

int main()
{
    int namta[10][10];
    int i, j, count_odd = 0, count_even = 0, sum = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            namta[i][j] = (i + 1) * (j + 1);
            printf("%d x %d = %d\n", i + 1, j + 1, namta[i][j]);
            if (namta[i][j] % 2 == 0) {
                count_even++;
            }
            else {
                count_odd++;
            }
            sum = sum + namta[i][j];
        }
        printf("\n");
    }
    printf("Odd : %d\n", count_odd);
    printf("Even : %d\n", count_even);
    printf("Sum : %d\n", sum);
    return 0;
}
