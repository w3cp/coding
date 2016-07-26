// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/count-digits.html?m=1

#include <stdio.h>
//#include <math.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        char num[11];
        int length, digits;
        int i;
        int left_zeroes = 0;
        scanf("%s", num);
        length = strlen(num);
        digits = 0;
        for (i = 0; i < length; i++) {
            if (num[i] == '0') {
                left_zeroes++;
            } else {
                break;
            }
        }
        digits = length - left_zeroes;
        if (digits == 0) {
            printf("1\n");
        } else {
            printf("%d\n", digits);
        }
        current_tc++;
    }
    
    return 0;
} // end main
