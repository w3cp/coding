// ac 35/100
// github.com/w3cp/
// http://algo.codemarshal.org/contests/nhspc-2016-practice-2/problems/E

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
        long long int a, m, x;
        scanf("%lld %lld", &a, &m);
        int is_mod = 0;
        printf("Case %d: ", current_tc);
        for (x = 0; x <= m; x++) {
            if ((a * x) % m == 1) {
                is_mod = 1;
                break;
            }
        }
        if (is_mod == 0) printf("no\n");
        else printf("yes\n");
    }
    
    return 0;
} // end main
