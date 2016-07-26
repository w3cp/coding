// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_63.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
       char ch;
       getchar();
       scanf("%c", &ch);
       //ch = getchar();
       if (ch >= '0' && ch <= '9') printf("Numerical Digit");
       else if (ch >= 'A' && ch <= 'Z') printf("Uppercase Character");
       else if (ch >= 'a' && ch <= 'z') printf("Lowercase Character");
       else printf("Special Character");
       printf("\n"); 
    }
    
    return 0;
} // end main
