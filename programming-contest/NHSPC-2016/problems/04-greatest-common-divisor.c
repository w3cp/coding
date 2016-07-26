// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cb2392251f00300a82f41

#include <stdio.h>

int gcd(int num1, int num2);

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        printf("%d\n", gcd(num1, num2));
        current_tc++;
    }
    
    return 0;
} // end main

int gcd(int num1, int num2) {
    int temp;
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
} // end gcd
