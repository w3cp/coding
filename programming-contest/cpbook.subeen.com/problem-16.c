// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/even-odd-2.html?m=1

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
    
    char even[5] = {'0', '2', '4', '6', '8'};
    
    while (current_tc < tc) {
        char num[101];
        int length;
        int i;
        int is_even = 0;
        scanf("%s", num);
        length = strlen(num);
        for (i = 0; i < 5; i++) {
            if (num[length - 1] == even[i]) {
                is_even = 1;
                printf("even\n");
                break;
            } 
        }
        if (is_even == 0) {
            printf("odd\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
