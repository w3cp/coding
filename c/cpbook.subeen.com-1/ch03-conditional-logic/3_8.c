#include <stdio.h>

int main()
{
    int number, remainder;
    
    number = 5;  
    remainder = number % 2;
    
    if(remainder == 0) {
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }
     
    return 0;
}
