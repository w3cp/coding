// ac
// github.com/w3cp/
// cpbook.subeen.com/2016/02/x.html?m=1

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
        int i;
        int x, n;
        scanf("%d %d", &x, &n);
        if (x > n) printf("Invalid!\n");
        for (i = 1; i * x <= n; i++) printf("%d\n", x * i);
        printf("\n");
    }
    
    return 0;
} // end main
