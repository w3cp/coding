// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/5518451d6b8f16da095db181

/*
Marks    Grade
------------------
90-100   A+
80-89    A
70-79    A-
60-69    B+
50-59    B-
40-49    C
35-39    D
 0-34    F
*/

#include <stdio.h>

#define MAX_SIZE 8

int LOW[MAX_SIZE] = {90, 80, 70, 60, 50, 40, 35, 0};
int HIGH[MAX_SIZE] = {100, 89, 79, 69, 59, 49, 39, 34};
char GRADE[MAX_SIZE][3]= {"A+", "A", "A-", "B+", "B-", "C", "D", "F"};

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
                printf("Student %d: %s\n", current_tc + 1, GRADE[i]);
                break;
            }
        }
        
        current_tc++;
    }
    
    return 0;
} // end main
