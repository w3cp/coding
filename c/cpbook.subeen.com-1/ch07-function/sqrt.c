
// to find out sqrt

#include <stdio.h>

double mysqrt(double num); // to return the sqrt of its parameter

int  main()
{
    double x;
    
    scanf("%lf", &x);
    
    printf("%0.2lf\n", mysqrt(x) );
    
    return 0;    
} // end main

// returns the sqrt of its parameter
double mysqrt(double number) {
    double low, high, mid;
    
    low = 0.0;
    high = number;
    
    while (high - low > 0.000000001) {
        mid = (low + high) / 2;
        if (mid * mid > number)
            high = mid;
        else
            low = mid;
    }
    
    return mid;    
} // end musqrt
