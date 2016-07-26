// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/left-right.html?m=1

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
        //char num[50];
        char num[51];
        int length;
        int i;
        scanf("%s", num);
        length = strlen(num);
        for (i = 0; i < length; i++) {
            if (num[i] == 'R') {
                num[i] = num[i + 1];
            }
            if (num[i] == 'L') {
                num[i] = num[i - 1];
            }
        }
        printf("%s\n", num);
        current_tc++;
    }
    
    return 0;
} // end main
