// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_84.html?m=1

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
        char s[100001];
        scanf(" %[^\n]", s);
        int length = strlen(s);
        char vowels[length];
        char consonants[length];
        int v = 0, c = 0;
        int is_vowel = 0;
        for (i = 0; i < length; i++) {
            for (j = 0; j < 6; j++) {
                if (s[i] == vowels_low[j] || s[i] == vowels_up[j]) {
                    vowels[v] = s[i];
                    is_vowel = 1;
                    v++;
                    break;
                } else {
                    is_vowel = 0;
                }
            }
            if (is_vowel == 0 && s[i] != ' ') {
                consonants[c] = s[i];
                c++;
            }
        }
        vowels[v] = '\0';
        consonants[c] = '\0';
        printf("%s\n", vowels);
        printf("%s\n", consonants);
    }
    
    return 0;
} // end main
