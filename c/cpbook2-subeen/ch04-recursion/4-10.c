#include <stdio.h>

void recurse()
{
    static int count = 1;
    if (count > 5) {
        return;
    }
    printf("Count: %d\n", count);
    count = count + 1;
    recurse();
}

int main()
{
    recurse(1);
    
    return 0;
}