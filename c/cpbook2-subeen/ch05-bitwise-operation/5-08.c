#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    if (n && !(n & (n-1))) {
        printf("%d is a power of 2\n", n);
    }
    else {
        printf("%d is NOT a power of 2\n", n);
    }
    
    return 0;
}