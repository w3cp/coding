// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/contests/nhspc-2016-practice-2/problems/F

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
    
    char a[12] = {'A', 'H', 'I', 'M', 'O', 'X', 'W', 'V', 'U', 'T', 'Y'};
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        char s[1001];
        char reverse_s[1001];
        int length;
        scanf("%s", s);
        length = strlen(s);
        int i, j;
        int is_sym = 0, is_symsym = 0, is_palin = 0;
        for (i = 0; i < length; i++) {
            for (j = 0; j < 11; j++) {
                if (s[i] == a[j]) {
                    is_sym = 1;
                    break;
                } else {
                    is_sym = 0;
                }
            }
            if (is_sym == 0) break;
        }
        
        // is palin
        for (i = 0, j = length - 1; i < length; i++, j--) {
            reverse_s[i] = s[j];
        }
        reverse_s[i] = '\0';
        if (0 == strcmp(s, reverse_s)) is_palin = 1;
        
        // now print the result
        printf("Case %d: ", current_tc);
        if (is_palin == 1 && is_sym == 1) printf("SameSymWord");
        else if (is_sym == 1) printf("SymWord");
        else printf("usual word");
        printf("\n");
        
    }
    
    return 0;
} // end main
