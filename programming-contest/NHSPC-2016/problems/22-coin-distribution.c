// ac 40/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556dde733bbbaa0300a96495

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        current_tc++;
        int i, j;
        long long int total_people; // N
        int total_fav; // K
        scanf("%lld %d", &total_people, &total_fav);
        int fav_num[total_fav];
        long long int coins[total_people];
        long long int sum;
        long long int count_unhappy = 0;
        for (i = 0; i < total_people; i++) {
            coins[i] = 0;
        }
        for (i = 0; i < total_fav; i++) {
            scanf("%d", &fav_num[i]);
        }
        for (i = 0; i < total_fav; i++) {
            sum = fav_num[i];
            for (j = 0; sum <= total_people; j++) {
                coins[sum - 1] = 1;
                sum += fav_num[i];
            }
        }
        for (i = 0; i < total_people; i++) {
            if (coins[i] == 0) count_unhappy++;
        }
        printf("Case %d: %lld\n", current_tc, count_unhappy);
    }
    
    return 0;
} // end main
