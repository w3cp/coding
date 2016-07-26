// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/cake-and-tray.html?m=1

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
        int num[3];
        int cake;
        for (i = 0; i < 3; i++) {
            scanf("%d", &num[i]);
        }
        cake = num[0] * 2;
        if (cake <= num[1] && cake <= num[2]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
