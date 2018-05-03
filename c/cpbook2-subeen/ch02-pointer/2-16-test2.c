#include <stdio.h>

int main()
{
    int n = 7;
    int *p, **q;

    p = &n;
    q = &p;

    printf("Value of c: %d\n", n);
    printf("Value of c: %d\n", *p);
    printf("Value of c: %d\n", **q);

    return 0;
}