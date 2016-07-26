#include <stdio.h>

int find_sum(int ara[], int n);

int main()
{
    int ara[] = {5, 7, 12, 20};
    int n = 4, avr;
    int sum = find_sum(ara, n);
    avr = sum / n;
    printf("%d\n", avr);
    return 0;
}

int find_sum(int ara[], int n)
{
    int sum = ara[0];
    int i;
    for (i = 1; i < n; i++) {
        sum = sum + ara[i];
    }
    return sum;
}
