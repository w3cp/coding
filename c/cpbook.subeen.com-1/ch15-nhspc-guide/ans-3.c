#include <stdio.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    scanf("%d" ,&tc);
    
    for (int case_no = 1; case_no <= tc; case_no++) {
        long long B, E;
        scanf("%lld", &B);
        scanf("%lld", &E);
        long long sum_e_to_b = ((E * (E + 1)) / 2) - (((B - 1) * B) / 2);
        printf("Case %d: %lld\n", case_no, sum_e_to_b);
    }
    
    return 0;
}
