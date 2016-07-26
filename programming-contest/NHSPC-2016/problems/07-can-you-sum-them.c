// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cc0302251f00300a82f67

#include <stdio.h>

int main()
{
    int i;
    int n;
    scanf("%d", &n);
    long long int num[n];
    long long int sum;
    sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%lld", &num[i]);
    }
    for (i = 0; i < n; i += 2) {
        sum += num[i];
    }
    printf("%lld\n", sum);
    return 0;
}
