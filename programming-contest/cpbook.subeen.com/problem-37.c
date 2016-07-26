// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/change-digits.html?m=1

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
        int i;
        int length;
        char num[10];
        //char even[6] = {'0', '2', '4', '6', '8'};
        char result;
        int WORD_BEGIN = 0;
        scanf("%s", num);
        length = strlen(num);
        
        for (i = 0; i < length; i++) {
            if (num[i] == '0' || num[i] == '2' || num[i] == '4' || num[i] == '6' || num[i] == '8') {
                result = num[i] + 1;
                if (result != '0' && WORD_BEGIN == 0) {
                    WORD_BEGIN = 1;
                }
                if (WORD_BEGIN == 1) {
                    printf("%c", result);
                }
            } else {
                result = num[i] - 1;
                if (result != '0' && WORD_BEGIN == 0) {
                    WORD_BEGIN = 1;
                }
                if (WORD_BEGIN == 1) {
                    printf("%c", result);
                }
                if (length == 1 && num[0] == '1') {
                    printf("0");
                }
            }
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main
