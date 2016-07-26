// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556b5d2a9c5e850300c49cae

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int n, sum;
        scanf("%d", &n);
        //int num[n];
        int num;
        sum = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            sum += num;
        }
        printf("Case %d: %d\n", current_tc + 1, sum / n);
        current_tc++;
    }
    
    return 0;
} // end main
