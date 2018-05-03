#include <stdio.h>

void plus_ten1(int a)
{
    a = a + 10;
}
void plus_ten2(int *a)
{
    *a = (*a) + 10;
}

int main()
{
    int a;
    a = 5;
    
    plus_ten1(a);
    printf("a: %d\n", a);
    
    plus_ten2(&a);
    printf("a: %d\n", a);
    
    return 0;
}