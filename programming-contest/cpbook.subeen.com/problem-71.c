// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_50.html?m=1

#include <stdio.h>

const int perfect_num[5] = {6, 28, 496, 8128, 33550336};

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i;
        int n;
        scanf("%d", &n);
        for (i = 0; i < 5; i++) {
            if (perfect_num[i] > n) break;
            printf("%d\n", perfect_num[i]);
        }
    }
    
    return 0;
} // end main
