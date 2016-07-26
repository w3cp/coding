// 
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/age-calculation.html?m=1
// Bangla calender

#include <stdio.h>
//#include <math.h>
//#include <string.h>

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
    int current_tc = 0;
    
    //int days_in_month[12] = {31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30};
    
    int i;
    int todays_date[3];
    
    for (i = 0; i < 3; i++) {
        scanf("%d", &todays_date[i]);
    }
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int j;
        int birth_date[3];
        int years, months, days;
        int total_days = 0;
        int total_leap = 0;
        
        for (j = 0; j < 3; j++) {
            scanf("%d", &birth_date[j]);
        }
        
        years = todays_date[0] - birth_date[0];
        months = todays_date[1] - birth_date[1];
        days = todays_date[2] - birth_date[2];
        
        total_days = (years * 365) + (months * 30) + days;
        //printf("%d\n", total_days);
        
        total_leap = leapCount(birth_date[0], todays_date[0]);
        total_days += total_leap;
        //printf("%d\n", total_days);
        
        if (birth_date[1] < 5) {
            total_days += (6 - birth_date[1]);
        }
        if (todays_date[1] < 5) {
            total_days += (todays_date[1] + 1);
        }
        
        printf("%d\n", total_days);
        
        current_tc++;
    }
    
    return 0;
} // end main
