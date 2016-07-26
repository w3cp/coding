#include <stdio.h>

int main()
{
    char ch = 'd';
    char capital = ch - 'f' + 'F';
    printf("Capital of %c is %c\n", ch, capital);
    return 0;
}
