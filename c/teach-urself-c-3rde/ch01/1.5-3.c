#include <stdio.h>

int main()
{
    int len, width;
    
    printf("Enter length: ");
    scanf("%d", &len);
    printf("Enter width: ");
    scanf("%d", &width);

    printf("Area is %d", len * width);
    
    return 0;
}
