#include <stdio.h>

int main()
{
    char ch;
    int num;
    
    printf("Enter a letrer: ");
    scanf("%c", &ch);
    
    // change case
    num = (int) ch;
    num = num ^ 32;
    printf("%c\n", num);
    
    return 0;
}