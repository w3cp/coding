// accepted
// https://github.com/w3cp/
// cpbook.subeen.com/2012/11/positive-negative.html?m=1

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int testCase;
    scanf("%d", &testCase);
    
    int number;
    int counter = 0;
    int positive = 0 , negative = 0;
    
    while (counter < testCase) {
        scanf("%d", &number);
        if (number > 0)
            ++positive;
        else if (number < 0)
            ++negative;
        ++counter;
    }
    
    printf("%d %d", positive, negative);
    
    return 0;
}
