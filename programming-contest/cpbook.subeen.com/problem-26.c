// accepted 
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/great-grading-scheme.html?m=1

/*
Marks    Grade
80-100   A+
75-79    A
70-74    A-
65-69    B+
60-64    B
55-59    B-
50-54    C
45-49    D
 0-44    F
*/

#include <stdio.h>
//#include <math.h>
//#include <string.h>

#define MAX_SIZE 9

int LOW[MAX_SIZE] = {80, 75, 70, 65, 60, 55, 50, 45, 0};
int HIGH[MAX_SIZE] = {100, 79, 74, 69, 64, 59, 54, 49, 44};
char GRADE[MAX_SIZE][3]= {"A+", "A", "A-", "B+", "B", "B-", "C", "D", "F"};

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int marks;
        scanf("%d", &marks);
        for (i = 0; i < MAX_SIZE; i++) {
            if (marks >= LOW[i] && marks <= HIGH[i]) {
                printf("Case %d: %s\n", current_tc + 1, GRADE[i]);
                break;
            }
        }
        
        current_tc++;
    }
    
    return 0;
} // end main
