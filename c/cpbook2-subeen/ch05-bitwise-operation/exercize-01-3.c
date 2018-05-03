// Find out the missing number from a given integer sequence 
// ie: 1, 2, 3, 4, 5, 6, 8, 9, 10 where 7 is missing
// 7, 9, 3, 4, 10, 6, 2, 1, 8 where 5 is missing

/* ****

P = a1 ^ a2 ^ a4
Q = a1 ^ a2 ^ a3 ^ a4

P ^ Q = (a1 ^ a2 ^ a4) ^ (a1 ^ a2 ^ a3 ^ a4)
      = (a1 ^ a1) ^ (a2 ^ a2) ^ (a3) ^ (a4 ^ a4)
      = 0 ^ 0 ^ a3 ^ 0
      = a3
      = missing value
      
**** */

#include <stdio.h>

int main()
{
    int ara[] = {5, 3, 18, 4, 20, 1, 2, 19, 9, 7, 15, 6, 10, 8, 11, 14, 12, 17, 16};
    int i, n = 20;
    int xor_of_all = 0, xor_of_ara = 0;
    
    if (n % 2 == 0) xor_of_all = n + 1;
    else if ((n / 4) + 3 == n) xor_of_all = 0;
    else xor_of_all = 1;
    
    if (n % 4 == 0) xor_of_all = n;
    
    for (i = 0; i < n-1; i++) xor_of_ara ^= ara[i];
    
    printf("%d\n", xor_of_all ^ xor_of_ara);
    
    return 0;
}