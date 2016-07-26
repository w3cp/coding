// AC
// github.com/w3cp/
// http://www.lightoj.com/volume_showproblem.php?problem=1001

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int sum;
        scanf("%d", &sum);
        int a = sum / 2;
        int b = sum - a;
        printf("%d %d\n", a, b);
    }
    
    return 0;
} // end main
