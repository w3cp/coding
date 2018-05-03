#include <stdio.h>

int main()
{
    char *p, a = 10;
    int *q, b = 'F';
    double *r, c = 302.64;
    
    p = &a;
    q = &b;
    r = &c;
    
    printf("Size of char: %d byte\n", sizeof(char));
    printf("p  : %p\n", p);
    printf("p+1: %p\n", p+1);
    printf("p+2: %p\n", p+2);
    
    printf("Size of int: %d byte\n", sizeof(int));
    printf("q  : %p\n", q);
    printf("q+1: %p\n", q+1);
    printf("q+2: %p\n", q+2);
    
    printf("Size of double: %d byte\n", sizeof(double));
    printf("r  : %p\n", r);
    printf("r+1: %p\n", r+1);
    printf("r+2: %p\n", r+2);
    
    return 0;
}