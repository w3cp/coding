// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/trivuz-prem.html?m=1

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
        int base, height, area;
        scanf("%d %d", &base, &height);
        //area = 0.5 * base * height;
        printf("Case %d: %d\n", current_tc + 1, base * height);
        current_tc++;
    }
    
    return 0;
} // end main
