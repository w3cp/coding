// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/prime-number.html?m=1

#include <stdio.h>
#include <math.h>

int isPrime(int number); // to check whether the given Number is prime or not

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int marks[10];
        int i;
        int total_prime = 0;
        for (i = 0; i < 10; i++) {
            scanf("%d", &marks[i]);
            if (isPrime(marks[i]) == 1) {
                total_prime++;
            }
        }
        printf("%d\n", total_prime);
        current_tc++;
    }
    
    return 0;
} // end main

// to check whether the given Number (n) is prime or not
// if prime then return 1. else return 0
int isPrime(int n)
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
