// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556a0cecd2406b030074ca7b

#include <stdio.h>

//char sign[6] = {'+', '-', '*', '/', '%'};

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        long long int a, b;
        char sign;
        long long int result;
        scanf("%lld %lld %c", &a, &b, &sign);
        if (sign == '+') result = a + b;
        if (sign == '-') result = a - b;
        if (sign == '*') result = a * b;
        if (sign == '/') result = a / b;
        if (sign == '%') result = a % b;
        printf("Case %d: %lld\n", current_tc + 1, result);
        current_tc++;
    }
    
    return 0;
} // end main
