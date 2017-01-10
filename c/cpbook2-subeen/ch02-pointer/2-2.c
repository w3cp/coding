#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("*p = %d\n", *p);
    printf("Value of p is %p\n", p);

    return 0;
}
