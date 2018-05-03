#include <stdio.h>

int main()
{
    FILE *fp;
    
    fp = fopen("my_file.txt", "w");
    
    fprintf(fp, "First line.\n");
    fprintf(fp, "Second line.\n");
    
    fclose(fp);
    
    fprintf(fp, "Third line\n");
    
    return 0;
}