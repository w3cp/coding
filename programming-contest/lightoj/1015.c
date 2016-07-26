// ac
// github.com/w3cp/
// www.lightoj.com/volume_showproblem.php?problem=1015

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i, j;
        int n, dust, sum;
        scanf("%d", &n);
        sum = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &dust);
            if (dust >= 0) sum += dust;
        }
        printf("Case %d: %d\n", current_tc, sum);
    }
    
    return 0;
} // end main
