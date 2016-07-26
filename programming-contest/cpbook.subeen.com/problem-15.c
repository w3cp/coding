// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/square-box-1.html?m=1

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
        int num;
        int i, j;
        scanf("%d", &num);
        for (i = 0; i < num; i++) {
            for (j = 0; j < num; j++) {
                printf("*");
            }
            printf("\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
