#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i, root;
    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    root = sqrt(n);
    for (i = 3; i <= root; i = i + 2) {
        if (n % i == 0) {
           return 0;
        }
    }
    return 1;
}

int main()   
{    
    int n, m;   
    while (1) {   
        printf("Please enter a number (enter 0 to exit): ");   
        scanf("%d", &n);   
        if (n == 0) {   
           break;   
        }    
        if (1 == is_prime(n)) {   
           printf("%d is a prime number.\n", n);   
        }   
        else {   
           printf("%d is not a prime number.\n", n);   
        }   
    }   
    return 0;   
}
