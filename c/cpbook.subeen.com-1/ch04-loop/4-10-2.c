#include <stdio.h>

int main()
{
    int a, b, c;
    
    for (a = 1; a <= 20; a = a + 1) {
        c = 0;
        for (b = 1; b <= 10; b = b + 1) {
            c = c + a;
            printf("%d x %d = %d\n", a, b, c);
        }
    }
    
    return 0;
}
