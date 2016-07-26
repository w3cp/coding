// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cbd5d2251f00300a82f60

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i, j;
        int num[3];
        scanf("%d %d %d", &num[0], &num[1], &num[2]);
        int index = 3;
        int temp, index_2, minimum;
        for (i = 0; i < index; i++) {
            minimum = 201;
            for (j = i; j < index; j++) {
                if (num[j] < minimum) {
                    minimum = num[j];
                    index_2 = j;
                }
            }
            temp = num[i];
            num[i] = minimum;
            num[index_2] = temp;
        }
        printf("Case %d: %d\n", current_tc + 1, num[1]);
        current_tc++;
    }
    
    return 0;
} // end main
