// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556ddd690cfef7030082b805

#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i, j;
        char s[201];
        int length;
        scanf("%s", s);
        length = strlen(s);
        printf("Case %d:\n", current_tc + 1);
        for (i = 0; i < length; i++) {
            for (j = 0; j <= i; j++) printf("%c", s[j]);
            printf("\n");
        }
        current_tc++;
    }
    
    return 0;
} // end main
