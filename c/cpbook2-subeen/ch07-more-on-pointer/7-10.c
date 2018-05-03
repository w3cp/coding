#include <stdio.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int operate(int (*op) (int, int), int a, int b)
{
    return op(a, b);
}

int main()
{
    int n1 = 10, n2 = 5;
    
    printf("Result: %d\n", operate(&add, n1, n2));
    
    printf("Result: %d\n", operate(&sub, n1, n2));
    
    return 0;
}