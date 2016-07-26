// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/moulik-utpadok.html?m=1

#include <stdio.h>
#include <math.h>

int is_prime(int number); 

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    while (1) {
        int i, j;
        
        int num;
        scanf("%d", &num);
        
        if (num < 2) {
            break;
        }
        
        int count_factor = 0;
        int total_factor = 0;
        
        printf("%d = ", num);
        
        for (i = 2; i <= num; ) {
            if ((is_prime(i) == 1) && (num % i == 0)) {
                //factor = i;
                if (count_factor == 0) {
                    printf("%d", i);
                }
                count_factor++;
                total_factor++;
                num = num / i;
            } else {
                if (count_factor > 0) {
                    printf("^%d ", count_factor);
                }
                if ((total_factor >= count_factor) && (count_factor > 0)) {
                    printf("* ");
                }
                count_factor = 0;
                i++;
            }
        }
        printf("^%d ", count_factor);
        printf("\n");
        
    }
    
    return 0;
} // end main

int is_prime(int n) {
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
    
} // end function is_prime() 
