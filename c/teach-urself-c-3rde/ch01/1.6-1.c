/* This program converts Earth days into Jovain years. */

#include <stdio.h>

int main()
{
    float e_days; /* number of Earth days */
    float j_years; /* equivalent nuber of Jovain years */

    /* get nuber of Earth days */
    printf("Enter nuber of Earth days: ");
    scanf("%f", &e_days);

    /* now compute Jovain years */
    j_years = e_days / (365.0 * 12.0);

    /* display the answer */
    printf("Equivalent Jovain years: %f", j_years);

    return 0;
}
