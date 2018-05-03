#include <stdio.h>
#include <string.h>

int fib_num[100];

int f_calls = 0;

int fib(int n)
{
    f_calls += 1;
    if (n == 1 || n == 2) {
        fib_num[0] = 0;
        fib_num[1] = 1;
        fib_num[2] = 1;
        return 1;
    }
    
    if (fib_num[n] == 0) {
        fib_num[n] = fib(n - 1) + fib(n - 2);
        return fib_num[n];
    }
    
    return fib_num[n];
}

int main()
{
    int n;
    char s[3];
    
    scanf("%d", &n);
    
    if (n == 1) {
        strcpy(s, "st");
    }
    else if (n == 2) {
        strcpy(s, "nd");
    }
    else if (n == 3) {
        strcpy(s, "rd");
    }
    else {
        strcpy(s, "th");
    }
    
    if (n < 0) {
        printf("Undefined\n");
        return 0;
    }
    
    printf("%d%s fib: %d\n", n, s, fib(n));
    printf("Number of function calls: %d\n", f_calls);
    
    return 0;
}