// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/dabar-board-e-rajar-chal.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int absolute(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int r1, r2, c1, c2;
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        int a, b;
        int step;
        a = absolute(r1 - r2);
        b = absolute(c1 - c2);
        if (a >= b) {
            step = a;
        } else {
            step = b;
        }
        printf("Case %d: %d\n", current_tc + 1, step);
        current_tc++;
    }
    
    return 0;
} // end main
