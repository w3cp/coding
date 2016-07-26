// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/duti-ayotokhetro.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
} // end max

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
} // end min


int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int x1, x2, x3, x4, y1, y2, y3, y4;
        int new_x1, new_x2, new_y1, new_y2;
        
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
        
        new_x1 = max(x1, x3);
        new_y1 = max(y1, y3);
        new_x2 = min(x2, x4);
        new_y2 = min(y2, y4);
        
        printf("Case %d: ", current_tc + 1);
        
        if (new_x1 > new_x2 || new_y1 > new_y2) {
            printf("No");
        } else {
            printf("Yes");
        }
        
        printf("\n");
        
        current_tc++;
    }
    
    return 0;
} // end main
