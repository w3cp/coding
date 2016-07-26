// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/sort-them-all.html?m=1

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
        int minimum, temp;
        int index, index_2;
        int num[3];
        index = 3;
        scanf("%d %d %d", &num[0], &num[1], &num[2]);
        for (i = 0; i < index; i++) {
            minimum = 1001;
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
        printf("Case %d: %d %d %d\n", current_tc + 1, num[0], num[1], num[2]);
        current_tc++;
    }
    
    return 0;
} // end main
