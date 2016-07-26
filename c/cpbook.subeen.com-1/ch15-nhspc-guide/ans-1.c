#include <stdio.h>

#define MAX_E 100000 + 1
int cumulative_sum[MAX_E + 1];

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int sum = 0;
    
    for (int i = 1; i <= MAX_E; i++) {
        sum = sum + i;
        cumulative_sum[i] = sum;
    }
    
    int t;
    scanf("%d", &t);
    
    for (int case_no = 1; case_no <= t; case_no++) {
        int B, E;
        scanf("%d", &B);
        scanf("%d", &E);
        int ans = cumulative_sum[E] - cumulative_sum[B - 1];
        printf("Case %d: %d\n", case_no, ans);
    }
    
    return 0;
}
