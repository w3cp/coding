#include <stdio.h>

int main()
{
    double a , b , sum;
    
    scanf("%lf %lf", &a , &b);
    
    sum = a + b;
    
    printf("Sum is: %0.3lf\n" , sum);
    
    return 0;
}
