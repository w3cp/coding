#include <stdio.h>
#include <string.h>

int main()
{
    char art[100];
    printf("Enter some character : ");
    gets(art);
    printf("\n\n");
    int i, j, k;
    int length = strlen(art);
    
    char art2[length];
    for (i = 0; i < length; i++) {
        art2[i] = art[i];
    }
    
    char art3[length];
    for (i = 0; i < length; i++) {
        art3[i] = ' ';
    }
    
    if (length % 2 == 1) {
        int mid1 = length / 2;
        int first = 0, last = length - 1;
        for (i = 0; i <= mid1; i++) {
            for (j = 0; j < length; j++) {
                printf("%c", art[j]);
            }
            printf("\n");
            art[first] = ' ';
            art[last] = ' ';
            first++;
            last--;
        }
        int mid = length / 2;
        first = mid - 1, last = mid + 1;
        for (i = 0; i < mid; i++) {
            for (j = 0; j < length; j++) {
                art3[mid] = art2[mid];
                art3[first] = art2[first];
                art3[last] = art2[last];
                printf("%c", art3[j]);
            }
            printf("\n");
            first--;
            last++;
        }
    }
    else {
        int mid1 = length / 2;
        int first = 0, last = length - 1;
        for (i = 0; i <= mid1 - 1; i++) {
            for (j = 0; j < length; j++) {
                printf("%c", art[j]);
            }
            printf("\n");
            art[first] = ' ';
            art[last] = ' ';
            first++;
            last--;
        }
        int mid = length / 2;
        int mid2 = mid - 1;
        first = mid2 - 1, last = mid + 1;
        for (i = 0; i < mid - 1; i++) {
            for (j = 0; j < length; j++) {
                art3[mid] = art2[mid];
                art3[mid2] = art2[mid2];
                art3[first] = art2[first];
                art3[last] = art2[last];
                printf("%c", art3[j]);
            }
            printf("\n");
            first--;
            last++;
        }
    }
    return 0;
}
