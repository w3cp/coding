#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int key, *item, n = 10;
    int values[] = {65, 6, 100, 9, 1, 250, 3, 12, 456, 103};
    
    qsort(values, n, sizeof(int), comparefunc);
    
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
