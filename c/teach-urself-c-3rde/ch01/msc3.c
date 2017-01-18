#include <stdio.h>

int o_to_c(int ounces);

int main()
{
    int ounces, cups;

    printf("Enter ounces: ");
    scanf("%d", &ounces);

    cups = o_to_c(ounces);

    printf("Cups: %d", cups);

    return 0;
}

int o_to_c(int ounces)
{
    return ounces / 8;
}

