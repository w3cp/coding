// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/contests/nhspc-2016-practice-1/problems/C

#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int d;
        double a;
        scanf("%d", &d);
        a = (double) d / sqrt(2);
        printf("Land %d: %0.5lf\n", current_tc + 1, a*a);
        current_tc++;
    }
    
    return 0;
} // end main
