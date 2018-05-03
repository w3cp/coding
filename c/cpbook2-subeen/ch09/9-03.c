#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main() 
{
    int a = 83, b = 323;
    double c = 8.32323, d = 3.33332323;
    
    printf("Max of %d and %d: %d\n", a, b, MAX(a, b));
    printf("Max of %d and %d: %d\n", 23, 45, (23 > 45 ? 23 : 45));
    printf("Max of %lf and %lf: %lf\n", c, d, MAX(c, d));
    
    return 0;
}
