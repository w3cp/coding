// accepted
// github.com/w3cp/
// cpbook.subeen.com/2015/12/factorial.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

long long factorial(int num);

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int num;
        scanf("%d", &num);
        printf("%lld\n", factorial(num));
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
