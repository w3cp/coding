// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/contests/nhspc-2016-practice-2/problems/B

#include <stdio.h>

int isLeap(int year) {
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
        return 1;
    }
    return 0;
}

int leapCount(int birth_day, int today) {
    int total_leap = 0;
    while (birth_day <= today) {
        if (isLeap(birth_day)) {
            total_leap++;
        }
        birth_day++;
    }
    return total_leap;
}


int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int a, b;
        scanf("%d %d", &a, &b);
        //total_leap = leapCount(a, b);
        printf("%d\n", leapCount(a, b));
    }
    
    return 0;
} // end main
