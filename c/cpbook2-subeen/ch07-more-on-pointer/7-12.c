#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int key, *item, n = 5;
    int values[] = {1, 2, 5, 8, 10};
    
    while (1) {
        printf("Enter the value of the key (0 to exit): ");
        scanf("%d", &key);
        if (key == 0) {
            break;
        }
        
        item = (int *) bsearch(&key, values, n, sizeof(int), comparefunc);
        
        if (item != NULL) {
            printf("Item found: %d\n", *item);
        }
        else {
            printf("Item not found in array\n");
        }
    }
    
    return 0;
}
