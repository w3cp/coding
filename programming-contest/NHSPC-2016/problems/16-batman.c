// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cc96a7b4cec0300d4abd8

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        double kilo, mile;
        scanf("%lf", &kilo);
        mile = kilo * 0.621371;
        printf("%0.10lf\n", mile);
        current_tc++;
    }
    
    return 0;
} // end main
