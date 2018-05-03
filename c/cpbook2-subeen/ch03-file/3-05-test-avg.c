#include <stdio.h>

int main()
{
    FILE *fp_math, *fp_en, *fp_bn;
    FILE *fp_out;
    char *input_math = "math.txt";
    char *input_en = "english.txt";
    char *input_bn = "bangla.txt";
    char *output = "result.txt";
    
    char in_math[10][80];
    char in_en[10][80];
    char in_bn[10][80];
    int result[10][5];
    int avg = 0, temp = 0;
    
    fp_math = fopen(input_math, "r");
    fp_en = fopen(input_en, "r");
    fp_bn = fopen(input_bn, "r");
    fp_out = fopen(output, "w");
    
    /*for (int i = 0; i < 10; i++) {
        result[i][0] = 0;
        result[i][1] = 0;
        result[i][2] = 0;
        result[i][3] = 0;
        result[i][4] = 0;
    }*/
    
    printf("Roll Math Eng  Bn Avg\n");
    temp = 21;
    while (temp--) {printf("-");}
    printf("\n");
    
    fprintf(fp_out, "Roll Math Eng  Bn Avg\n");
    temp = 21;
    while (temp--) {fprintf(fp_out, "-");}
    fprintf(fp_out, "\n");
    
    for (int i = 0; i < 9; i++) {
        fgets(in_math[i], 80, fp_math);
        fgets(in_en[i], 80, fp_en);
        fgets(in_bn[i], 80, fp_bn);
        
        sscanf(in_math[i], "%d %d", &result[i][0], &result[i][1]);
        sscanf(in_en[i], "%d %d", &result[i][0], &result[i][2]);
        sscanf(in_bn[i], "%d %d", &result[i][0], &result[i][3]);
        
        avg = (result[i][1] + result[i][2] + result[i][3]) / 3;
        result[i][4] = avg;
        
        printf("   %d   %d  %d  %d  %d\n", result[i][0], result[i][1], 
            result[i][2], result[i][3], result[i][4]);
        fprintf(fp_out, "   %d   %d  %d  %d  %d\n", result[i][0], result[i][1], 
            result[i][2], result[i][3], result[i][4]);
    }
    
    temp = 21;
    while (temp--) {printf("-");}
    printf("\n");
    
    temp = 21;
    while (temp--) {fprintf(fp_out, "-");}
    fprintf(fp_out, "\n");
    
    fclose(fp_math);
    fclose(fp_en);
    fclose(fp_bn);
    fclose(fp_out);
    
    return 0;
}