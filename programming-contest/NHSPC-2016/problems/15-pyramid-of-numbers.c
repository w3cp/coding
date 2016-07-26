// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cc4ac2251f00300a82f6f

#include <stdio.h>
//#include <math.h>
//#include <string.h>

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
        scanf("%d", &height);
        printf("Case %d:\n", current_tc + 1);
        for (i = 1; i <= height; i++) {
            for (j = 1; j <= i; j++) {
                printf("%d", j);
            }
            printf("\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
