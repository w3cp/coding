// not submitted but ac 100/100
// github.com/w3cp/
// https://algo.codemarshal.org/contests/nhspc-2016-practice-1/problems/B

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int total, taken;
        int i, j;
        int index, index_2, minimum, temp;
        int min = 0, max = 0;
        
        scanf("%d %d", &total, &taken);
        int ara[total]; // chocolate
        
        for (i = 0; i < total; i++) {
            scanf("%d", &ara[i]);
        }
        
        index = total;
        
        // now sort them
        for (i = 0; i < index; i++) {
            minimum = 1001;
            for (j = i; j < index; j++) {
                if (ara[j] < minimum) {
                    minimum = ara[j];
                    index_2 = j;
                }
            }
            temp = ara[i];
            ara[i] = minimum;
            ara[index_2] = temp;
        }
        
        for (i = 0, j = index - 1; i < taken, j >= total - taken; i++, j--) {
            min += ara[i];
            max += ara[j];
        }
        
        printf("Case %d: %d %d\n", current_tc + 1, max, min);
        
        current_tc++;
    }
    
    return 0;
} // end main
