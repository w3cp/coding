// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/gunitok.html?m=1

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
        int num, high;
        int multiple;
        scanf("%d %d", &num, &high);
        printf("Case %d:", current_tc + 1);
        for (i = 1; ; i++) {
            multiple = num * i;
            if (multiple > high) {
                break;
            }
            printf(" %d ", multiple);
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main
