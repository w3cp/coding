// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/shomoy-bohiya-jay.html?m=1

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
        long long total_sec;
        int year, month, day, hour, min, sec;
        
        scanf("%lld", &total_sec);
        
        printf("Case %d:", current_tc + 1);
        
        min = total_sec / 60;
        sec = total_sec - (min * 60);
        
        hour = min / 60;
        min = min - (hour * 60);
        
        day = hour / 24;
        hour = hour - (day * 24);
        
        month = day / 30;
        day = day - (month * 30);
        
        year = month / 12;
        month = month - (year * 12);
        
        if (year > 1) {
            printf(" %d years", year);
        } else if (year == 1) {
            printf(" %d year", year);
        }
        
        if (month > 1) {
            printf(" %d months", month);
        } else if (month == 1) {
            printf(" %d month", month);
        }
        
        if (day > 1) {
            printf(" %d days", day);
        } else if (day == 1) {
            printf(" %d day", day);
        }
        
        if (hour > 1) {
            printf(" %d hours", hour);
        } else if (hour == 1) {
            printf(" %d hour", hour);
        }
        
        if (min > 1) {
            printf(" %d minutes", min);
        } else if (min == 1) {
            printf(" %d minute", min);
        }
        
        if (sec > 1) {
            printf(" %d seconds", sec);
        } else if (sec == 1) {
            printf(" %d second", sec);
        }
        
        printf("\n");
        
        //printf("Case %d: ", current_tc + 1);
        //printf("%d %d %d %d %d %d\n", year, month, day, hour, min, sec);
        
        current_tc++;
    }
    
    return 0;
} // end main
