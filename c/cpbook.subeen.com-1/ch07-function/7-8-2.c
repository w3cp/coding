#include <stdio.h>

double pi = 3.1416;

double fun(double a);

int main()
{
    double i, a;
    a = 10;
    i = fun(a);
    printf("%lf\n", i);
    return 0;
}

double fun(double a)
{
    double s;
    s = pi * a * a;
    return s;
}
