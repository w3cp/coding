#include <stdio.h>

int main()
{
    int decimal, count_one;
    while (1) {
        printf("Enter a decimal number (enter -1 to exit) : ");
        scanf("%d", &decimal);
        if (decimal == -1) {
            break;
        }
        if (decimal == 0) {
            printf("Binary value is 0\n");
            printf("Total ones: 0\n\n");
            continue;
        }
        int quotient;
        int i, j;
        int binary[10000];
        for (quotient = decimal, i = 0; quotient != 0; i++) {
            binary[i] = quotient % 2;
            quotient = quotient / 2;
        }
        count_one = 0;
        printf("Binary value is : ");
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
            if (binary[j] == 1) {
                count_one++;
            }
        }
        printf("\n");
        printf("Total one: %d\n\n", count_one);
    }
    return 0;
}