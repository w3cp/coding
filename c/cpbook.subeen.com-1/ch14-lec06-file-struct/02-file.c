#include <stdio.h>

int main()
{
    FILE *output_file;
    output_file = fopen("a.txt", "w");
    char input[80];
    printf("-- WRITE SOMETHING $ ");
    gets(input);
    //fgets(input, 80, input_file);
    fputs(input, output_file);
    printf("-- SAVED --");
    return 0;
}
