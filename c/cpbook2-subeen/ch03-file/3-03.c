#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";
    
    fp = fopen(filename, "w");
    
    fprintf(fp, "First line.\n");
    fprintf(fp, "Second line.\n");
    
    fclose(fp);
    
    fp = fopen(filename, "a");
    fprintf(fp, "Third line\n");
    
    return 0;
}