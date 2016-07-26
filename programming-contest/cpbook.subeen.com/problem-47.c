// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2015/12/lcm.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int gcd(int num1, int num2);
int lcm(int num1, int num2);

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
        printf("LCM = %d\n", lcm(num1, num2));
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

int lcm(int num1, int num2) {
    return (num1 * num2) / gcd(num1, num2);
} // end lcm
