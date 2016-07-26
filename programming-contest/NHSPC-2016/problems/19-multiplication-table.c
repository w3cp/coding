// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556dcd333bbbaa0300a96479

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int num;
        scanf("%d", &num);
        printf("Case %d:\n", current_tc + 1);
        for (i = 1; i < 11; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }
        current_tc++;
    }
    
    return 0;
} // end main
