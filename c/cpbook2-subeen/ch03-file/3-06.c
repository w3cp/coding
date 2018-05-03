#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file = "image1.jpg";
    char *output_file = "image2.jpg";
    int ch;
    
    fp_in = fopen(input_file, "rb");
    if (fp_in == NULL) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    
    fp_out = fopen(output_file, "wb");
    
    while (1) {
        ch = fgetc(fp_in);
        if (ch == EOF) {
            break;
        }
        fputc(ch, fp_out);
    }
    
    fclose(fp_in);
    fclose(fp_out);
    
    return 0;
}
