// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/contests/nhspc-2016-practice-2/problems/C

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
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
       char s[61];
       scanf("%s", s);
       int length = strlen(s);
       int i;
       //int first_pos = 1;
       //int curr_pos = first_pos;
       long long int last_pos = 1;
       for (i = 0; i < length; i++) {
           if (s[i] == 'L') last_pos = last_pos * 2;
           else last_pos = (last_pos * 2) + 1;
       }
       printf("%lld\n", last_pos);
    }
    
    return 0;
} // end main
