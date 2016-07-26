// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/average-1.html?m=1

#include <stdio.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int marks[5];
        int i;
        int sum = 0;
        for (i = 0; i < 5; i++) {
            scanf("%d", &marks[i]);
            sum += marks[i];
        }
        printf("%d\n", sum / 5);
        current_tc++;
    }
    
    return 0;
}
