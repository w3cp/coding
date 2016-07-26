// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_74.html?m=1

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
    //tc = 2;
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i, j;
        int size;
        scanf("%d", &size);
        int ara[size];
        for (i = 0; i < size; i++) {
            scanf("%d", &ara[i]);
        }
        int is_asc = 1, is_desc = 1;
        int previous, current;
        previous = ara[0];
        for (i = 1; i < size; i++) {
            current = ara[i];
            if (current >= previous) {
                previous = current;
            } else {
                is_asc = 0;
                break;
            }
        }
        previous = ara[0];
        for (i = 1; i < size; i++) {
            current = ara[i];
            if (current <= previous) {
                previous = current;
            } else {
                is_desc = 0;
                break;
            }
        }
        // now print the result
        if (is_asc == 1 || is_desc == 1) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
} // end main
