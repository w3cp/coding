// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/digital-trivuz.html?m=1

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
    
    while (current_tc < tc) {
        int i, j;
        int letter, height;
        scanf("%d %d", &letter, &height);
        printf("Case %d:\n", current_tc + 1);
        for (i = 0; i < height; i++) {
            for (j = 0; j <= i; j++) {
                printf("%d", letter);
            }
            printf("\n");
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main
