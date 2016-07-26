// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_3.html?m=1

#include <stdio.h>

const long long int perfect_num[8] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        long long int n;
        scanf("%lld", &n);
        int i;
        int is_perfect = 0;
        for (i = 0; i < 8; i++) {
            if (n == perfect_num[i]) {
                is_perfect = 1;
                break;
            }
        }
        if (is_perfect == 1) printf("YES, %lld is a perfect number!\n", n);
        else printf("NO, %lld is not a perfect number!\n", n);
    }
    
    return 0;
} // end main
