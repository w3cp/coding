#include <stdio.h>

int main()
{
    int a, a_, b, b_, c, gcd, lcm;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    a_ = a;
    b_ = b;
    if (a == 0) gcd = b;
    else if (b == 0) gcd = a;
    else {
        while (b != 0) {
            c = b;
            b = a % b;
            a = c;
        }
        gcd = a;
    }
    printf("GCD is %d\n", gcd);
    lcm = (a_ * b_) / gcd;
    printf("LCM is %d\n", lcm);
    return 0;
}
