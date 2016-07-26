// accepted - but less efficient
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/common-digits.html?m=1

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
        int i;
        char num1[3];
        char num2[3];
        scanf("%s %s", num1, num2);
        int is_match = 0;
        int is_match1 = 0;
        int is_match2 = 0;
        char a, b;
        for (i = 0; i < 2; i++) {
            if (num1[0] == num2[0] || num1[0] == num2[1]) {
                is_match = 1;
                is_match1 = 1;
                a = num1[0];
            }
            if (num1[1] == num2[0] || num1[1] == num2[1]) {
                is_match = 1;
                is_match2 = 1;
                b = num1[1];
            }
        }
        if (is_match == 0) {
            printf("N\n");
        } else if (is_match1 == 1 && is_match2 == 1) {
            if (a == b) {
                printf("%c\n", a);
            } else if (a < b) {
                printf("%c%c\n", a, b);
            } else {
                printf("%c%c\n", b, a);
            }
        } else if (is_match1 == 1) {
            printf("%c\n", a);
        } else if (is_match2 == 1) {
            printf("%c\n", b);
        }
        
        current_tc++;
    }
    
    return 0;
} // end main
