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
        art2[i] = ' ';
    }
    if (length % 2 == 0) {
        int first = 0, last = length - 1;
        int mid = length / 2;
        for (i = 0; i < mid; i++) {
            for (j = 0; j < length; j++) {
                art2[first] = art[first];
                art2[last] = art[last];
                printf("%c", art2[j]);
            }
            printf("\n");
            first++;
            last--;
        }
    }
    else {
        int first = 0, last = length - 1;
        int mid = length / 2;
        for (i = 0; i < mid + 1; i++) {
            for (j = 0; j < length; j++) {
                art2[first] = art[first];
                art2[last] = art[last];
                printf("%c", art2[j]);
            }
            printf("\n");
            first++;
            last--;
        }
    }
    return 0;
}
