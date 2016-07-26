#include <stdio.h>

int main()
{
    int ascii;
    for (ascii = 0; ascii < 256; ascii++) {
        printf("Ascii - %d : %c\n", ascii, ascii);
    }
    return 0;
}
