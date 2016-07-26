// status: accepted
// github.com/w3cp/
// cpbook.subeen.com/2015/12/alien-gupi.html

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        float food;
        int days;
        scanf("%f", &food);
        days = 0;
        while (food >= 1.00) {
            food = food / 2;
            days++;
        }
        printf("%d days\n", days);
        current_tc++;
    }
    
    return 0;
} // end main
