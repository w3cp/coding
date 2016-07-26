// status: not submitted ! 
// github.com/w3cp/
// https://algo.codemarshal.org/contests/nhspc-2016-practice-1/problems/D

#include <stdio.h>

int a = 0, b = 1;

// fibonacci series - nth elm
int fibo(int n) {
    if (n == 1) return a; // a, b are global
    if (n == 2) return b;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc < tc; current_tc++) {
        int i;
        int n, sum;
        scanf("%d %d %d", &a, &b, &n); // a, b € global 
        sum = 0;
        for (i = 1; i <= n; i++) {
            sum += fibo(i);
        }
        printf("Case %d: %d\n", current_tc, sum);
    }
    
    return 0;
} // end main
