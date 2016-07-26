// ac 100/100
// github.com/w3cp/
// https://algo.codemarshal.org/contests/nhspc-2016-practice-1/problems/D

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int x, y, n;
        int temp;
        long long sum;
        scanf("%d %d %d", &x, &y, &n);
        sum = x + y;
        for (i = 0; i < n - 2; i++) {
            sum += x + y;
            temp = x + y;
            x = y;
            y = temp;
            //printf("%d\n", temp);
        }
        printf("Case %d: %lld\n", current_tc + 1, sum);
        current_tc++;
    }
    
    return 0;
} // end main
