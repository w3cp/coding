#include <stdio.h>

int main()
{
    freopen("in.txt", "rt", stdin);
    //freopen("out.txt", "wt", stdout);
    
    int num1, num2, sum;
    
    while (2 == scanf("%d %d", &num1, &num2)) {
        sum = num1 + num2;
        printf("%d\n", sum);
    }
    
    return 0;
}
