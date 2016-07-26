#include <stdio.h>

int main()
{
    int i, n, sum;
    printf("1 + 2 + 3 + ..... + n প্রথম n সংখ্যক বেজোড় সংখ্যার যোগফল\n");
    printf("Please enter the value of n : \n");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
            printf("প্রথম n সংখ্যক বেজোড় সংখ্যার যোগফল = %d\n", sum);
        }
    }
    return 0;
}
