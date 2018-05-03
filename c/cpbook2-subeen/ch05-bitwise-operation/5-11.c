#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (n ^ m) {
        puts("Numbers are not equal\n");
    }
    else {
        puts("Numbers are equal\n");
    }
    
    return 0;
}