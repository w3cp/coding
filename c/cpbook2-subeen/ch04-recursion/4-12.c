#include <stdio.h>

int f_calls = 0;

int factorial(int n)
{
    f_calls += 1;
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Undefined\n");
        return 0;
    }
    
    printf("factorial(%d): %d\n", n, factorial(n));
    printf("Number of function calls: %d\n", f_calls);
    
    return 0;
}