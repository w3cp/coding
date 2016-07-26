// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2013/01/shobdo-ultao.html?m=1

#include <stdio.h>
//#include <math.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    getchar(); // required to remove previous input
    while (current_tc < tc) {
        int i, j; // loop
        char words[150];
        int length;
        
        //getchar(); // required to remove previous input
        gets(words);
        
        length = strlen(words);
        
        for (i = length - 1; i >= 0; i--) {
            if (words[i] == ' ') {
                for (j = i + 1; j < length && words[j] != ' '; j++) {
                    printf("%c", words[j]);
                }
                printf(" ");
            }
        }
        for (i = 0; i  < length; i++) {
            if (words[i] != ' ') {
                printf("%c", words[i]);
            } else {
                break;
            }
        }
        printf("\0");
        printf("\n");
        
        current_tc++;
    }
    
    return 0;
} // end main
