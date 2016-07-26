// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556b62679c5e850300c49cb5

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
        int total;
        int index, max;
        
        scanf("%d", &total);
        
        int marks[total];
        int marks_count[101];
        
        for (i = 0; i < total; i++) {
            scanf("%d", &marks[i]);
        }
        
        for(i = 0; i < 101; i++) {
            marks_count[i] = 0;
        }
        for(i = 0; i < total; i++) {
            marks_count[marks[i]]++;
        }
        max = marks_count[0];
        index = 0;
        for(i = 0; i < 101; i++) {
            if ((marks_count[i] >= max) && (i > index)) {
                max = marks_count[i];
                index = i;
            }
        }
        printf("Case %d: %d %d\n", current_tc + 1, index, max);
        
        current_tc++;
    }
    
    return 0;
} // end main
