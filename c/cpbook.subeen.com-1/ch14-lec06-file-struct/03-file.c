#include <stdio.h>

int main()
{
    FILE *input_file, *output_file;
    
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    
    int a, b, sum;
    
    fscanf(input_file, "%d %d", &a, &b);
    
    sum = a + b;
    
    fprintf(output_file, "The sum of %d and %d is %d", a, b, sum);
    
    fclose(input_file);
    fclose(output_file);
    
    return 0;
}
