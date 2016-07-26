// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/kon-dhara.html?m=1

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
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        //int both = 0;
        int geometric = 0, arithmetic = 0;
        if (a - b == b - c) {
            arithmetic = 1;
        }
        if (a / b == b / c) {
            geometric = 1;
        }
        printf("Case %d: ", current_tc + 1);
        if (geometric == 1 && arithmetic == 1) {
            printf("Both\n");
        } else if (arithmetic == 1) {
            printf("Arithmetic Progression\n");
        } else if (geometric == 1) {
            printf("Geometric Progression\n");
        } else {
            printf("None\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
