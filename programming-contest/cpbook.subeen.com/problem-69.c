// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_78.html?m=1

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
        char str[10001];
        scanf(" %[^\n]", str);
        
        const char s[7] = ",!;?. ";
        char *token;
        
        int count_word = 0;
        
        // get the first token 
        token = strtok(str, s);
        
        // walk through other tokens 
        while(token != NULL) {
            count_word++;
            //printf("%s\n", token);
            token = strtok(NULL, s);
        }
        
        printf("Count = %d\n", count_word);
        //printf("%s\n", str);
    }
    
    return 0;
} // end main
