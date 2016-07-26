// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556b70dafc5f0103000a0b15

#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int n;
        scanf("%d", &n);
        int num[n];
        int nth_elm;
        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        
        if ((num[1] - num[0]) == (num[2] - num[1])) nth_elm = num[0] + (n * (num[1] - num[0]));
        else if ((num[1] / num[0]) == (num[2] / num[1])) nth_elm = num[0] * (int) pow((num[1] / num[0]), n);
        
        printf("%d\n", nth_elm);
        current_tc++;
    }
    
    return 0;
} // end main
