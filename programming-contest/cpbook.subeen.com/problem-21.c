// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/jama-shonkot.html?m=1

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
        int days;
        scanf("%d", &days);
        if (days % 2 == 0) {
            printf("red\n");
        } else {
            printf("blue\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
