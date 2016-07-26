#include <stdio.h>
#include <string.h>

int main()
{
    char word[80];
    int i, j, len;
    int is_palindrome;
    while (1) {
        printf("Enter a word (enter 0 to exit) : ");
        scanf ("%s", word);
        if (word == 0) { // something is wrong
            break;
        }
        len = strlen(word);
        for (i = 0, j = len - 1; i < len; i++, j--) {
            if (word[i] == word[j]) {
                is_palindrome = 1;
            }
            else {
                is_palindrome = 0;
            }
        }
        if (is_palindrome == 1 ) {
            printf("%s is a palindrome.\n", word);
        }
        else {
            printf("%s is not a palindrome.\n", word);
        }
    }
    return 0;
}
