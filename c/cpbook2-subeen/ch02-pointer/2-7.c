#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    y = *p;
    *p = 15;
    *q = 20; // there is a thief if detected by the OS

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p is %d\n", *p);
    printf("Value of *q is %d\n", *q);

    return 0;
}
