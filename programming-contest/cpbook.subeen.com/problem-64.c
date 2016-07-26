// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_31.html?m=1

#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    //tc = 1;
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i;
        char s[101];
        scanf("%s", s);
        int length = strlen(s);
        //int sum = 0;
        for (i = 0; i < length; i++) {
            //sum += s[i] - 64;
            printf("%d", s[i] - 64);
        }
        //printf("%d\n", sum);
        printf("\n");
    }
    
    return 0;
} // end main
