// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/maximum-minimum-number.html?m=1

#include <stdio.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int marks[5];
        int i;
        int min = 0, max = 0;
        int first_time_signal = 1;
        for (i = 0; i < 5; i++) {
            scanf("%d", &marks[i]);
            if (first_time_signal == 1) {
                first_time_signal = 0;
                min = marks[0];
                max = marks[0];
            }
            if (marks[i] < min) {
                min = marks[i];
            }
            else if (marks[i] > max) {
                max = marks[i];
            }
        }
        printf("%d %d\n", max, min);
        current_tc++;
    }
    
    return 0;
}
