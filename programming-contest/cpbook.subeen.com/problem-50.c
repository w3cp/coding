// accepted
// github.com/w3cp/
// cpbook.subeen.com/2016/02/blog-post_30.html

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
        int num;
        scanf("%d", &num);
        i = num;
        if (i == 1) {
            printf("2");
        } else if (i == 0) {
            printf("1");
        } else {
            printf("2^%d", i);
        }
        for (i = num - 1; i >= 0; i--) {
            if (i == 1) {
                printf(" + 2");
            } else if (i == 0) {
                printf(" + 1");
            } else {
                printf(" + 2^%d", i);
            }
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main
