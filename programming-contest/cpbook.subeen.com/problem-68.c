// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_4.html?m=1

#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i = 0;
        char words[10001];
        int length;
        
        int WORD_BEGIN = 0;
        int count = 1; // there is at least one number
        
        //getchar(); // required to remove previous input
        //gets(words);
        scanf(" %[^\n]", words);
        
        length = strlen(words);
        
        while (i < length) {
            if (words[i] != ' ' && WORD_BEGIN == 0) {
                WORD_BEGIN = 1;
            }
            if (words[i] == ' ' && words[i - 1] != ' ' && WORD_BEGIN == 1) {
                count++;
            }
            i++;
        }
        
        // what to do if last char is a space and last-1 is not a space
        if (words[length - 1] == ' ') {
            count--;
        }
        
        printf("Count = %d\n", count);
    }
    
    return 0;
} // end main
