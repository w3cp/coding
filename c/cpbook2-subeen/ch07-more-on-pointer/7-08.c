#include <stdio.h>

int main()
{
    void *vp;
    
    int n = 10;
    
    vp = &n;
    
    printf("Address of n: %p\n", &n);
    printf("Value of vp: %p\n", vp);
    printf("Content of vp: %d\n", *((int *) vp));
    
    return 0;
}