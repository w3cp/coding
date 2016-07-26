// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/even-odd-1.html?m=1

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
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
