// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/square-number.html?m=1

#include <stdio.h>
#include <math.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int num;
        scanf("%d", &num);
        int root = sqrt(num);
        if (num == root * root) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        current_tc++;
    }    
    return 0;
} // end main
