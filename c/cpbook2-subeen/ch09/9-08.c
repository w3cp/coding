#include <stdio.h>

enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
    FRIDAY, SATURDAY};

int main() 
{
    enum DAY today;
    
    today = THURSDAY;
    
    switch (today) {
        case SUNDAY:
            printf("Today is Sunday\n");
            break;
        case MONDAY:
            printf("Today is Monday\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday\n");
            break;
        case THURSDAY:
            printf("Today is Thursday\n");
            break;
        case FRIDAY:
            printf("Today is Friday\n");
            break;
        case SATURDAY:
            printf("Today is Saturday\n");
            break;
     }
     
     return 0;
}   