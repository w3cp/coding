#include <stdio.h>
#include <string.h>

int main()
{
    char s[1002], ch;
    int i, length, is_word_started;
    gets(s);
    length = strlen(s);
    is_word_started = 0;
    for (i = 0; i < length; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
           if (is_word_started == 0) {
              is_word_started = 1;
              ch = 'A' + s[i] - 'a';
              printf("%c", ch);
           }
           else {
              printf("%c", s[i]);
           }
        }
        else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
           if (is_word_started == 0) {
              is_word_started = 1;
           }
           printf("%c", s[i]);
        }
        else {
           if (is_word_started == 1) {
              is_word_started = 0;
              printf("\n");
           }
        }
    }
    printf("\n");
    return 0;
}
