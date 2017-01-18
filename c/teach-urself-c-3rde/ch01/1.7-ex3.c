/* A program with two functions */

#include <stdio.h>

// void func1(void); /* prototype for func1() */

int main()
{
    printf("I ");
    func1();
    printf("C.");

    return 0;
}

void func1(void)
{
    printf("like ");
}

