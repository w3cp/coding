// AC
// github.com/w3cp/
// www.lightoj.com/volume_showproblem.php?problem=1022

#include <stdio.h>
#include <math.h>

const double PI = 2 * acos(0.0);

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        double r;
        scanf("%lf", &r);
        double circle_area, square_area, shaded_area;
        circle_area = PI * r * r;
        square_area = (r * 2) * (r * 2);
        shaded_area = square_area - circle_area;
        printf("Case %d: %0.2lf\n", current_tc, shaded_area);
    }
    
    return 0;
} // end main
