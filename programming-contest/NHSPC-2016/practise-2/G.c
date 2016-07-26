// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/contests/nhspc-2016-practice-2/problems/G

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int n;
        scanf("%d", &n);
        printf("Case %d: %d\n", current_tc, (n * (n - 1)) / 2);
    }
    
    return 0;
} // end main
