// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/vajok.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int num;
        int divisor;
        scanf("%d", &num);
        printf("Case %d:", current_tc + 1);
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf(" %d ", i);
            }
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main
