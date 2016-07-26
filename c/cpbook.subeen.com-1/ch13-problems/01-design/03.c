#include <stdio.h>
#include <string.h>

int main()
{
    char art[100];
    printf("Enter some character : ");
    gets(art);
    printf("\n\n");
    int i, j;
    int length = strlen(art);
    char art2[length];
    for (i = 0; i < length; i++) {
        art2[i] = art[i];
    }
    int first = 0;
    for (i = 0; i < length; i++) {
        for (j = 0; j < length; j++) {
            printf("%c", art[j]);
        }
        printf("\n");
        art[first] = ' ';
        first++;
    }
    char art3[length];
    for (i = 0; i < length; i++) {
        art3[i] = ' ';
    }
    int elm = length - 1;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length; j++) {
            art3[elm] = art2[elm];
            art3[elm - 1] = art2[elm - 1];
            printf("%c", art3[j]);
        }
        printf("\n");
        elm--;
    }
    return 0;
}
