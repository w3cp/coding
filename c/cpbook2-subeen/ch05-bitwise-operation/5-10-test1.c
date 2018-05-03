#include <stdio.h>
#include <limits.h>

int main()
{
    int n = sizeof(int) * CHAR_BIT;
    printf("n=%d, sizeof(int)=%d, CHAR_BIT=%d\n", n, sizeof(int), CHAR_BIT);
    int i, count = 0, num;
    
    scanf("%d", &num);
    
    for (i = 0; i < n; i++) {
        if (num & (1 << i)) count++;
    }
    
    printf("Number of 1: %d\n", count);
    
    return 0;
}