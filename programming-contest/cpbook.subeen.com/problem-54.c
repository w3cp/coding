// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_51.html?m=1

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i, j;
        int n, m;
        scanf("%d %d", &n, &m);
        //int line = (2 * n) - 1;
        int height = n;
        
        for (i = 0; i < height; i++) {
            printf("%d", m);
            for (j = 0; j < i; j++) {
                printf("%d", m);
            }
            printf("\n");
        }
        for (i = height - 1; i > 0; i--) {
            printf("%d", m);
            for (j = 0; j < i - 1; j++) {
                printf("%d", m);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
} // end main
