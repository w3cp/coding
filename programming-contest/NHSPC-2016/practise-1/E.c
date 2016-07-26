// ac 40/100
// github.com/w3cp/
// https://algo.codemarshal.org/contests/nhspc-2016-practice-1/problems/E

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        long long i;
        long long n;
        //long long d;
        scanf("%lld", &n);
        for (i = n; i > 0; i--) {
            if ((n % i == 0) && (i % 2 != 0)) {
                printf("Case %d: %lld\n", current_tc + 1, i);
                break;
            }
        }
        current_tc++;
    }
    
    return 0;
} // end main
