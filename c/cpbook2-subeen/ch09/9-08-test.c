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
        case MONDAY:
            printf("Today is Monday\n");
        case TUESDAY:
            printf("Today is Tuesday\n");
        case WEDNESDAY:
            printf("Today is Wednesday\n");
        case THURSDAY:
            printf("Today is Thursday\n");
        case FRIDAY:
            printf("Today is Friday\n");
        case SATURDAY:
            printf("Today is Saturday\n");
     }
     
     return 0;
}   