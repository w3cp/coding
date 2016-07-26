// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556df1de3bbbaa0300a964d5

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
        int row;
        scanf("%d", &height);
        //row = (height * 2) - 1;
        printf("Case %d:\n", current_tc + 1);
        for (i = 1; i <= height; i++) {
            for (j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
        for (i = height - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
