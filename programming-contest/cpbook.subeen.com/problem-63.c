// AC
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post.html?m=1

#include <stdio.h>
#include <math.h>
//#include <time.h>

const int MAX = 100000;
//int primes_ara[MAX];
int primes_ara[100000];

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

/*int isPrime(int n) {
    if (n < 2) return 0;
    return primes_ara[n];
} // end isPrime*/


int main()
{
    /*freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    clock_t start, end;
    double time_spent;
    start = clock();*/
    
    // now call the giant sieve function
    sieve();
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        int i;
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        for (i = a; i <= b; i++) {
            if (primes_ara[i]) count++;
        }
        printf("%d\n", count);
    }
    
    /*end = clock();
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time spent: %0.9lf\n", time_spent);*/
    
    return 0;
    
} // end main
