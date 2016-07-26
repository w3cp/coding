#include <stdio.h>

int main()
{
    FILE *input_file;
    input_file = fopen("a.txt", "r");
    char input[80];
    fgets(input, 80, input_file);
    puts(input);
    return 0;
}
