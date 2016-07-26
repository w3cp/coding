// ac
// github.com/w3cp/
// cpbook.subeen.com/2016/02/blog-post_53.html?m=1

#include <stdio.h>
#include <math.h>
//#include <string.h>

const int DIGIT = 3;

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int num;
        int a, b, c;
        int temp;
        scanf("%d", &num);
        temp = num;
        
        c = temp % 10;
        temp = temp / 10;
        
        b = temp % 10;
        temp = temp / 10;
        
        a = temp;
        
        temp = pow(a, 3) + pow(b, 3) + pow(c, 3);
        
        if (temp == num) printf("%d is an armstrong number!", num);
        else printf("%d is not an armstrong number!", num);
        printf("\n");
    }
    
    return 0;
} // end main
