// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_40.html?m=1

#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int a, b, c;
        double area;
        scanf("%d %d %d", &a, &b, &c);
        double s = (double) (a + b + c) / 2;
        area = (s - a) * (s - b) * (s - c);
        area = s * area;
        area = sqrt(area);
        printf("Area = %0.3lf\n", area);
    }
    
    return 0;
} // end main
