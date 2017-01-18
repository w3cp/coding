#include <stdio.h>

double moonWeights(double weights);

int main()
{
    double weights_on_earth;

    printf("Enter your weights on earth: ");
    scanf("%lf", &weights_on_earth);
    printf("Your weights on moon is: %0.3lf", moonWeights(weights_on_earth));

    return 0;
}

double moonWeights(double weights)
{
    return weights * 0.17;
}

