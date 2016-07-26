#include <stdio.h>

int main()
{
    char ara[100];
    while(NULL != gets(ara)) {
        printf("%s\n", ara);
    }
    return 0;
}
