// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556b5a1e9c5e850300c49cac

#include <stdio.h>

int maximum(int a, int b);

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int a, b, c;
        int max;
        scanf("%d %d %d", &a, &b, &c);
        max = maximum(a, b);
        max = maximum(max, c);
        printf("Case %d: %d\n", current_tc + 1, max);
        current_tc++;
    }
    
    return 0;
} // end main

int maximum(int a, int b) {
    if (a > b) return a;
    return b;
} // end max
