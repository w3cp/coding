// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556dd63a0cfef7030082b7f8

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i, j;
        int height;
        char down_or_up, left_or_right;
        scanf("%d %c %c", &height, &down_or_up, &left_or_right);
        
        printf("Case %d:\n", current_tc + 1);
        if (down_or_up == 'U' && left_or_right == 'R') {
            for (i = 0; i < height; i++) {
                for (j = 0; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        }
        
        if (down_or_up == 'D' && left_or_right == 'R') {
            for (i = 0; i < height; i++) {
                for (j = height; j > i; j--) {
                    printf("*");
                }
                printf("\n");
            }
        }
        
        if (down_or_up == 'U' && left_or_right == 'L') {
            for (i = 0; i < height; i++) {
                for (j = height - 1; j > i; j--) {
                    printf(" ");
                }
                for (j = i; j >= 0; j--) printf("*");
                printf("\n");
            }
        }
        
        if (down_or_up == 'D' && left_or_right == 'L') {
            for (i = 0; i < height; i++) {
                for (j = i; j > 0; j--) printf(" ");
                for (j = height; j > i; j--) {
                    printf("*");
                }
                printf("\n");
            }
        }
        
        current_tc++;
    }
    
    return 0;
} // end main
