/* 3^n = ***x, print x.
exg: 3^6 = 729, print 9; 3^3 = 27, print 7 */

#include <stdio.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    // 3^0 = 1, 3^1 = 3, 3^2 = 9, 3^3 = 27, 3^4 = 81, 3^5 = 243, 3^6 = 729 ...
    // 1 3 9 7 1 3 9 .... (pattern/cycle) 
    // 100 % 4 = 0, 6 % 4 = 2, 5 % 4 = 1, 3 % 4 = 3, 4 % 4 = 0, 2 % 4 = 2 
    
    int n;
    int values[4] = {1, 3, 9, 7};
    scanf("%d", &n);
    n = n % 4;
    printf("%d\n", values[n]);
    
    return 0;
}
