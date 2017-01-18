#include <stdio.h>

double convert(void);

int main()
{
    printf("%lf", convert());

    return 0;
}

double convert(void)
{
    double dollar;
    printf("Enter number of dollars: ");
    scanf("%lf", &dollar);
    return dollar / 2;
}

