// AC
// github.com/w3cp/
// www.lightoj.com/volume_showproblem.php?problem=1069

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int me, lift;
        scanf("%d %d", &me, &lift);
        int sec = 19;
        if (lift >= me) sec += (4 * lift);
        //else sec += (((100 - lift) + 100) * 4);
        else sec += (((me - lift) + me) * 4);
        printf("Case %d: %d\n", current_tc, sec);
    }
    
    return 0;
} // end main
