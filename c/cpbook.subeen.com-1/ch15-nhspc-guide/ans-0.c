#include <stdio.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int t;
    scanf("%d" ,&t);
    for (int case_no = 1; case_no <= t; case_no++) {
        int B, E;
        scanf("%d", &B);
        scanf("%d", &E);
        int ans = 0;
        for (int i = B; i <= E; i++) {
            ans += i ;
        }
        printf("Case %d: %d\n", case_no, ans);
    }
    
    return 0;
}
