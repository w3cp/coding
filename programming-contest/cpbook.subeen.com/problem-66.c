// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_89.html?m=1

#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    char vowels_low[6] = {'a', 'e', 'i', 'o', 'u'};
    char vowels_up[6] = {'A', 'E', 'I', 'O', 'U'};
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i, j;
        char s[1001];
        scanf(" %[^\n]", s);
        int length = strlen(s);
        int total = 0;
        for (i = 0; i < length; i++) {
            for (j = 0; j < 6; j++) {
                if (s[i] == vowels_low[j] || s[i] == vowels_up[j]) total++;
            }
        }
        printf("Number of vowels = %d\n", total);
    }
    
    return 0;
} // end main
