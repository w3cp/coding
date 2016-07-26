// AC
// github.com/w3cp/
// http://codeforces.com/problemset/problem/669/A

#include <stdio.h>
//#include <time.h>

int main()
{
    /* freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    clock_t start, end;
    double time_spent;
    start = clock(); */
    
    /* int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    for (current_tc = 1; current_tc <= tc; current_tc++) {
        
    } */
    
    int n;
    scanf("%d", &n);
    
    int count, sum, prev;
    
    count = 0;
    sum = 0;
    prev = 1;
    
    while (1) {
        sum += prev;
        if (sum > n) break;
        count++;
        prev = (prev == 1) ? 2 : 1;
    }
    
    printf("%d\n", count);
    
    /* end = clock();
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time spent: %0.9lf\n", time_spent); */
    
    return 0;
} // end main
