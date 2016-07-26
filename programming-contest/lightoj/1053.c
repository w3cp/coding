// ac
// github.com/w3cp/
// www.lightoj.com/volume_showproblem.php?problem=1053

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
        int ara[3];
        int a, b, c;
        int temp;
        scanf("%d %d %d", &ara[0], &ara[1], &ara[2]);
        // sort the ara
        for (i = 0; i < 3; i++) {
            for (j = i; j < 3; j++) {
                if (ara[j] < ara[i]) {
                    temp = ara[i];
                    ara[i] = ara[j];
                    ara[j] = temp;
                }
            }
        }
        // printf the result
        //printf("%d %d %d\n", ara[0], ara[1], ara[2]);
        printf("Case %d: ", current_tc);
        // is 90 degree triangle ?
        a = ara[0] * ara[0];
        b = ara[1] * ara[1] ;
        c = ara[2] * ara[2];
        if (a + b == c) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
} // end main
