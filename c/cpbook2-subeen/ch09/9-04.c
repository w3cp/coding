#include <stdio.h>

#define SWAP(a, b) { \
    a ^= b; \
    b ^= a; \
    a ^= b; \
}

int main() 
{
    int a = 83, b = 323;
    
    printf("a = %d, b = %d\n", a, b);
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}