// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/prime-or-not.html?m=1

int isPrime(long long number); // to check whether the given Number is prime or not

#include <stdio.h>
#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        long long num;
        scanf("%lld", &num);
        //printf("Case %d:", current_tc + 1);
        if (isPrime(num) == 1) {
            printf("%lld is a prime", num);
        } else {
            printf("%lld is not a prime", num);
        }
        printf("\n");
        current_tc++;
    }
    
    return 0;
} // end main

// to check whether the given Number (n) is prime or not
// if prime then return 1. else return 0
int isPrime(long long n)
{
    int i; // for looping 
    int root;
    
    if (n < 2) {
        return 0; // n is not prime
    }
    
    if (n == 2) {
        return 1; // 2 is a prime number
    }
    
    if (n % 2 == 0) {
        return 0;
        /* if the given number is even then that is not prime.
        because the only even prime is 2.and
         we check wheather the given number is 2 or not (n == 2) */
    }
    
    root = sqrt(n);
    
    for (i = 3; i <= root; i = i + 2) {
        if (n % i == 0) {
            return 0;
            // if p * q = m, then p <= sqrt(m) or q <= sqrt(m)
        }
    }
        
    return 1;
    
} // end function isPrime() 
