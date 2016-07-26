// not submitted yet
// github.com/w3cp/
// cpbook.subeen.com/2016/02/blog-post_7.html?m=1

#include <stdio.h>

int power(int num, int pow) {
    int i;
    int result = 1;
    for (i = 0; i < pow; i++) {
        result = result * num;
    }
    return result;
}

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int x, k;
        int sum = 0;
        scanf("%d %d", &x, &k);
        if (x == 1) sum = p + 1;
        else sum = (power(x, k + 1) - 1) / (x - 1);
        printf("Result = %d\n", sum);
        current_tc++;
    }
    
    return 0;
} // end main
