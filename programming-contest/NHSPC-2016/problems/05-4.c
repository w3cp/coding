// ac poor marks
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556def2d3bbbaa0300a964ce

#include <stdio.h>

long long power(long long num, long long pow) {
    long long i;
    long long result = 1;
    for (i = 0; i < pow; i++) {
        result = result * num;
    }
    return result;
}

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    long long i;
    long long x, p;
    long long sum = 0;
    scanf("%d %d", &x, &p);
    for (i = 0; i <= p; i++) {
        sum += power(x, i);
    }
    printf("%d\n", sum % 10);
    
    return 0;
} // end main
