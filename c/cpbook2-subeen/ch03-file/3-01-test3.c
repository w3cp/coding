#include <stdio.h>

int main()
{
    FILE *fp;
    //char filename[] = "my_file.txt";
    
    fp = fopen("test/filename.txt", "w"); 
    // will throw segmentation fault if folder 'test' doesn't exist
    
    fprintf(fp, "This is a file created by my program!\n");
    fprintf(fp, "I am so happy.");
    
    fclose(fp);
    
    return 0;
}