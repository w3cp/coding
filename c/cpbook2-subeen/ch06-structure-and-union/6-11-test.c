#include <stdio.h>

union u {
    char ch;
    int x;
    int y;
} uv;

int main()
{
    uv.ch = 'A';
    printf("uv.ch = %c\n", uv.ch);
    
    uv.x = 66;
    printf("uv.x = %d\n", uv.x);
    printf("uv.ch = %c\n", uv.ch);
    
    uv.y = 67;
    printf("uv.y = %d\n", uv.y);
    
    printf("uv.ch = %c\n", uv.ch);
    printf("uv.x = %d\n", uv.x);
    
    return 0;
}