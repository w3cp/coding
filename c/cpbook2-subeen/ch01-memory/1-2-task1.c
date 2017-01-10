#include <stdio.h>

int checkDigitOrNot(char ch) {
    int ascii_value = ch;
    if (ascii_value >= 48 && ascii_value <= 57) return 1;
    return 0;
} // end method checkDigitOrNot

int main()
{
    char ch;
    int is_digit = 0;

    printf("Please enter a char: ");
    ch = getchar();
    is_digit = checkDigitOrNot(ch);
    if (is_digit == 1) {
        printf("%c is a Digit\n", ch);
    } else {
            printf("%c isn't a Digit\n", ch);
    }

    return 0;
} // end method main
