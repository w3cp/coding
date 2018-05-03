#include <stdio.h>

int main()
{
    int ara[] = {100, 300, 500, 700, 900};
    int *p;
    p = ara;
    
    printf("*p: %d\n", *p);
    printf("*p +1: %d\n", *p + 1);
    printf("*(p +1): %d\n", *(p + 1));
    printf("*p +2: %d\n", *p + 2);
    printf("*(p +2): %d\n", *(p + 2));
    
    return 0;
}
