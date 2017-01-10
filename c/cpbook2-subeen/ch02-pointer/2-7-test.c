#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    y = *p;
    *p = 15;
    q = &y;
    *q = 20;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p is %d\n", *p);
    printf("Value of *q is %d\n", *q);

    return 0;
}
