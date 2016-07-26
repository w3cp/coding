// ac 50/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556de44f0cfef7030082b82e

#include <stdio.h>

long long int absolute(long long int num) {
    if (num < 0) return -num;
    return num;
}

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    long long int a, b;
    
    while (scanf("%lld %lld", &a, &b) == 2) {
        printf("%lld\n", absolute(a - b));
    }
        
    return 0;
} // end main
