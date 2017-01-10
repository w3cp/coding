#include <stdio.h>

int main()
{
    char c = 'A';
    char *p;

    p = &c;

    printf("Address of c: %p\n", p);
    printf("Address of p: %p\n", &p);

    return 0;
}
