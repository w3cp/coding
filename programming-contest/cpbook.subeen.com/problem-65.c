// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/100.html?m=1

#include <stdio.h>
#include <math.h>
//#include <time.h>

const int MAX = 101;
const int MIN = 0;
//int primes_ara[MAX];
int primes_ara[101];

void sieve();
int isPrime(int n);

int main()
{
    /*freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    clock_t start, end;
    double time_spent;
    start = clock();*/
    
    // now call the giant sieve function
    sieve();
    
    int i;
    int curr_num, divisor, temp;
    //int factor[MAX];
    //int total_zero[MAX];
    int factor[101];
    int total_zero[101];
    for (i = 0; i < MAX; i++) {
        factor[i] = 0;
        total_zero[i] = 0;
    }
    for (curr_num = MIN; curr_num < MAX; curr_num++) {
        temp = curr_num;
        //for (divisor = 2; divisor <= curr_num, temp > 1; ) {
        for (divisor = 2; divisor <= 5 + 1, temp > 1; ) {
            if (isPrime(divisor) && temp % divisor == 0) {
                factor[divisor]++;
                temp = temp / divisor;
            } else {
                divisor++;
            }
        }
        // now count the trailing zero
        total_zero[curr_num] = factor[5];
    }
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int n;
        scanf("%d", &n);
        
        // now print the result
        printf("%d\n", total_zero[n]);
    }
    
    /*end = clock();
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time spent: %0.9lf\n", time_spent);*/
    
    return 0;
    
} // end main


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
