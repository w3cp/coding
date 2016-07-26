// ac
// github.com/w3cp/
// 

#include <stdio.h>
#include <math.h>

const int MAX = 100;
const int MIN = 2;
int primes_ara[MAX];

void sieve() {
    int i, j;
    int root;
    for (i = 2; i < MAX; i++) primes_ara[i] = 1;
    root = sqrt(MAX);
    for (i = 2; i <= root; i++) {
        if (primes_ara[i] == 1) {
            for (j = 2; i * j <= MAX; j++) {
                primes_ara[i * j] = 0;
            }
        }
    }
} // end sieve

int isPrime(int n) {
    if (n < 2) return 0;
    return primes_ara[n];
} // end isPrime


int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    // now call the giant sieve function
    sieve();
    
    int i;
    /*for (i = 0; i < MAX; i++) {
        printf("%d %d\n", i, primes_ara[i]);
    }*/
    int curr_num, divisor, temp;
    int is_first_time;
    int factor[MAX];
    for (i = 0; i < MAX; i++) {
        factor[i] = 0;
    }
    for (curr_num = MIN; curr_num < MAX; curr_num++) {
        temp = curr_num;
        for (divisor = 2; divisor <= curr_num, temp > 1; ) {
            if (isPrime(divisor) && temp % divisor == 0) {
                factor[divisor]++;
                temp = temp / divisor;
            } else {
                divisor++;
            }
        }
        // now print the result
        printf("%d! =", curr_num);
        is_first_time = 1;
        for (i = 0; i <= curr_num; i++) {
            if (factor[i] > 0) {
                if (is_first_time == 1) {
                    printf(" (%d, %d)", i, factor[i]);
                    is_first_time = 0;
                } else {
                    printf(", (%d, %d)", i, factor[i]);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
} // end main
