// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2015/12/alternate-elements.html?m=1

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
        int i;
        int length;
        scanf("%d", &length);
        
        int ara[length];
        
        for (i = 0; i < length; i++) {
            scanf("%d", &ara[i]);
        }
        
        printf("Set %d:", current_tc + 1);
        
        for (i = 0; i < length; i = i + 2) {
            printf("  %d", ara[i]);
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main
