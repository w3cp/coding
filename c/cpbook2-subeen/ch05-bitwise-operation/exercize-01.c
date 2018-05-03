// STATUS: complete

#include <stdio.h>

int main()
{
    int ara[] = {5, 3, 4, 1, 2, 9, 7, 6, 10};
    int n = 10;
    int i;
    int xor_of_all = 0, xor_of_ara = 0;
    
    for (i = 1; i <= n; i++) {
        xor_of_all ^= i;
    }
    
    for (i = 0; i < n-1; i++) {
        xor_of_ara ^= ara[i];
    }
    
    printf("%d\n", xor_of_all ^ xor_of_ara);
    
    return 0;
}