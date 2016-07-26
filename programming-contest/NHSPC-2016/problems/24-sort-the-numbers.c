// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556ddb403bbbaa0300a96491

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    //scanf("%d", &tc);
    tc = 1;
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        
        int i, j, k;
        int index;
        int temp;
        
        index = 3;
        //scanf("%d", &index);
        int num[index];
        for (i = 0; i < index; i++) scanf("%d", &num[i]);
        
        // now sort DESC
        for (i = 0; i < index; i++) {
            for (j = i; j < index; j++) {
                if (num[j] > num[i]) {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        
        // now print them
        printf("%d", num[0]);
        for (i = 1; i < index; i++) {
            printf(" %d", num[i]);
        }
        printf("\n");
        
    }
    
    return 0;
} // end main
