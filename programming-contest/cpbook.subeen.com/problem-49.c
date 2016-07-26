// ac
// github.com/w3cp/
// cpbook.subeen.com/2016/02/blog-post_11.html?m=1

#include <stdio.h>

long long factorial(int num);

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
        double sum = 0.0;
        scanf("%d", &num);
        for (i = 1; i <= num; i++) {
            sum += ((double) i / factorial(i));
        }
        printf("%0.4lf\n", sum);
        current_tc++;
    }
    
    return 0;
} // end main

long long factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
} // end factorial
