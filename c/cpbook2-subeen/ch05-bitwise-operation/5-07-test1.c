#include <stdio.h>

char to_upper(char ch)
{
    return ch & 95;
}

char to_lower(char ch)
{
    return ch | 32;
}

int main()
{
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";
    
    for (int i = 0; i < 26; i++) {
        printf("%c", str[i] );
    }
    printf("\n");
    for (int i = 0; i < 26; i++) {
        printf("%c", to_upper(str[i]));
    }
    printf("\n");
     for (int i = 0; i < 26; i++) {
        printf("%c", to_lower(str[i]));
    }
    printf("\n");
     for (int i = 0; i < 26; i++) {
        printf("%c", (str[i] ^ 32));
    }
    
    return 0;
}