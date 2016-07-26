#include <stdio.h>

int add(int num1, int num2)
{
    double sum = num1 + num2;
    return sum;
}

int main()
{
    double a, b, c;
    a = b = 2.5;
    c = add(a, b);
    printf("%lf\n", c);
    return 0;
}
