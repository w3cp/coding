#include <stdio.h>
#include <string.h>

int main()
{
    char line[101];
    int len;
    
    while (1) {
        printf("Enter a line: ");
        scanf("%s", line);
        
        len = strlen(line);
        for (int i = 0; i < len; i++) {
            printf("%c", line[i] ^ 32);
        } 
        printf("\n\n");
    }
    
    return 0;
}