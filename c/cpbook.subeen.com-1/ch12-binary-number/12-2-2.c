#include <stdio.h>
#include <math.h>

int main()
{
    int d, power, i, n;
    printf("Enter a decimal number : ");
    scanf("%d", &d);
    power = 0;
    n = 0;
    for (i = 0; i <= n; i++) {
        if (power <= d) {
            power = pow(2, n);
            n++;
        }
    }
    n = n - 2;
    int n2 = n;
    power = pow(2, n);
    char binary[n + 1];
    for (i = 0; i < n2 + 1; i++) {
        if (power <= d) {
            binary[i] = '1';
            n--;
            power = power + pow(2, n);
        }
        else if (power > d) {
            binary[i] = '0';
            power = power - pow(2, n);
            n--;
            power = power + pow(2, n);
        }
    }
    printf("Binary value is : ");
    for (i = 0; i < n2 + 1; i++) {
        printf("%c", binary[i]);
    }
    printf("\n");
    return 0;
}
