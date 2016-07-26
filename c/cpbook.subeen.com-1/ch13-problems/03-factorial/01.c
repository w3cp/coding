#include <stdio.h>

int main()
{
    while (1) {
        int num, i;
        printf("Enter a positive number (number<13) (enter -1 to exit) : ");
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        if (num == 0) {
            printf("\nFactoril is : 1\n\n");
            continue;
        }
        printf("\n");
        for (i = num - 1; i > 0; i--) {
            num = num * i;
        }
        printf("Factorial is : %d\n\n", num);
    }
    return 0;
}
