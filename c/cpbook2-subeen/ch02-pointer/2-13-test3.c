#include <stdio.h>

int main()
{
    char s[] = "Bangladesh";
    char s2[] = "India";
    char *p = "BD";

    p = s;
    //*p = "BD";
    *p = s2;

    printf("Name of our country: %s\n", p);

    return 0;
}