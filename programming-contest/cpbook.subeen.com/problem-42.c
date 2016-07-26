// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/02/khoj-search-2.html?m=1

#include <stdio.h>
//#include <math.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i, j, k;
        
        char str1[128], str2[128];
        scanf("%s %s", str1, str2);
        
        int len1, len2;
        int count = 0;
        
        len1 = strlen(str1);
        len2 = strlen(str2);
        
        for (i = 0; i < len1; i++) {
            if (len1 < len2) {
                break;
            }
            for (j = i, k = 0; k < len2 && j < len1; j++, k++) {
                if (str1[j] != str2[k]) {
                    break;
                }
            }
            if (k == len2) {
                count++;
            }
        }
        
        printf("%d\n", count);
        
        current_tc++;
    }
    
    return 0;
} // end main
