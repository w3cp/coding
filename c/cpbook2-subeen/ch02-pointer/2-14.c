#include <stdio.h>

int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *p2, *p3;
    p3 = &c3;
    p2 = &c2;
    p1 = &c1;

    printf("%c, %c, %c\n", *p1, *p2, *p3);
    return 0;
}
