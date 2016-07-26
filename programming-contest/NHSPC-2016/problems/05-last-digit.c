// ac poor marks
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556def2d3bbbaa0300a964ce

#include <stdio.h>

int power(int num, int pow) {
    int i;
    int result = 1;
    for (i = 0; i < pow; i++) {
        result = result * num;
    }
    return result;
}

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int i;
    int x, p;
    int sum = 0;
    scanf("%d %d", &x, &p);
    for (i = 0; i <= p; i++) {
        sum += power(x, i);
    }
    printf("%d\n", sum % 10);
    
    return 0;
} // end main
