// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/magic.html?m=1

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
        char str[51];
        int length;
        int BALL_IN = 0;
        int BALL_OUT = 0;
        int MAGIC = 0;
        
        scanf("%s", str);
        length = strlen(str);
        
        for (i = 0; i < length; i++) {
            /*if (str[0] == 0) {
                MAGIC = 1;
                break;
            }*/
            if (str[i] == '1') {
                BALL_IN += 1;
            } else if (str[i] == '0') {
                BALL_OUT += 1;
            }
            if (BALL_OUT > BALL_IN) {
                MAGIC = 1;
                break;
            }
        }
        if (MAGIC == 1) {
            printf("MAGIC\n");
        } else {
            printf("NORMAL\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
