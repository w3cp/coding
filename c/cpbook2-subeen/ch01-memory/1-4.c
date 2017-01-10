#include <stdio.h>

int main()
{
    int ara[5] = {50, 60, 70, 80, 90};

    printf("Value of Array: %d, %d, %d, %d, %d\n", ara[0], ara[1], ara[2], ara[3], ara[4]);
    printf("Address of ara is %p\n", ara);
    printf("Address of ara[0] is %p\n", &ara[0]);
    printf("Address of ara[1] is %p\n", &ara[1]);
    printf("Address of ara[2] is %p\n", &ara[2]);
    printf("Address of ara[3] is %p\n", &ara[3]);
    printf("Address of ara[4] is %p\n", &ara[4]);

    return 0;
}
