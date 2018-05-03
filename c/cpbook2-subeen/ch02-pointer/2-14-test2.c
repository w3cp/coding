#include <stdio.h>

int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;
    p3 = &c3;
    p2 = &c2;
    p1 = &c1;

    printf("%c, %c, %c\n", *p1, *p2, *p3);
    printf("%p, %c, %p, %p\n", c1, c1, &c1, *p1); 
    printf("%p\n", c1); // will print '0x41' which binary is '65' - thats the ASCII 'A'
    int n = 2;
    printf("%p, %p", n, &n);
    return 0;
}