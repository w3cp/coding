// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_22.html?m=1

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
        int i;
        char s[1001];
        int length;
        //scanf("%s", s);
        scanf(" %[^\n]", s);
        length = strlen(s);
        //char reverse_s[length];
        for (i = length - 1; i >= 0; i--) printf("%c", s[i]);
        printf("\n");
    }
    
    return 0;
} // end main 
