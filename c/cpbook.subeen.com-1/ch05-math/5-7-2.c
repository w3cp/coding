#include <stdio.h>

int main()
{
    double C, F;
    printf("Enter the temperature in Farenheit : ");
    scanf("%lf", &F);
    C = (F - 32) / 1.8;
    printf("Temperature in Celsius is : %0.2lf\n", C);
    return 0;
}
