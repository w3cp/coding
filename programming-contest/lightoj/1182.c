// AC
// github.com/w3cp/
// www.lightoj.com/volume_showproblem.php?problem=1182

#include <stdio.h>

int binary_one(long long int n);

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        long long int n;
        int ones;
        scanf("%lld", &n);
        printf("Case %d: ", current_tc);
        ones = binary_one(n);
        if (ones % 2 == 0) printf("even\n");
        else printf("odd\n");
    }
    
    return 0;
} // end main

int binary_one(long long int decimal) {
    int number_of_ones = 0;
    long long int quotient = decimal;
    while (quotient != 0) {
        if ((quotient % 2) == 1) number_of_ones++;
        quotient = quotient / 2;
    }
    return number_of_ones;
} // end of onoroy

