#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    printf("Enter some character : ");
    gets(c);
    printf("\n\n");
    int i, j;
    int elm = strlen(c);
    int elm2 = elm;
    for (i = 0; i < elm2; i++) {
        for (j = 0; j < elm && elm >= 0; j++) {
            printf("%c", c[j]);
        }
        printf("\n");
        elm--;
    }
    elm = 1;
    for (i = 0; i < elm2 - 1; i++) {
        for (j = 0; j <= elm; j++) {
            printf("%c", c[j]);
        }
        printf("\n");
        elm++;
    }
    return 0;
}
