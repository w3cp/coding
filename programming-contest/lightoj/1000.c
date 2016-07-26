// ac
// github.com/w3cp/
// http://www.lightoj.com/volume_showproblem.php?problem=1000

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", current_tc, a + b);
    }
    
    return 0;
} // end main
