// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/average-2.html?m=1

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int num;
        scanf("%d", &num);
        double marks[num];
        int i;
        double sum = 0;
        for (i = 0; i < num; i++) {
            scanf("%lf", &marks[i]);
            sum += marks[i];
        }
        double average = sum / num;
        printf("%.2lf\n", average);
        current_tc++;
    }
    
    return 0;
}
