#include <stdio.h>

int main()
{
    char a, b;
    
    a = 0;
    b = ~a;
    printf("a = %d, b = %d\n", a, b);
    
    a = 1;
    b = ~a;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}