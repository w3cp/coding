#include <stdio.h>

int factorial(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial is %d", factorial(num));
    return 0;
}

int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1); // recursion
    }
}
