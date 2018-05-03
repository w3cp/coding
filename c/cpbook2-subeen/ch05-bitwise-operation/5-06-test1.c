#include <stdio.h>

int main()
{
    char ch;
    int num;
    
    while (1) {
        printf("Enter a letrer (0 to exit): ");
        scanf("%c", &ch);
        
        if (ch == '0') {
            break;
        }
        
        // change case
        num = (int) ch;
        num = num ^ 32;
        printf("%c\n\n", num);
    }
    
    return 0;
}