// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/count-numbers.html?m=1

#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while(current_tc < tc) {
        int i = 0; // loop
        char numbers[1000];
        int length;
        
        int WORD_BEGIN = 0;
        int count = 1; // there is at least one number
        
        getchar(); // required to remove previous input
        gets(numbers);
        //scanf(" %[^\n]", numbers);
        
        length = strlen(numbers);
        
        while (i < length) {
            if (numbers[i] != ' ' && WORD_BEGIN == 0) {
                WORD_BEGIN = 1;
            }
            if (numbers[i] == ' ' && numbers[i - 1] != ' ' && WORD_BEGIN == 1) {
                count++;
            }
            i++;
        }
        
        // what to do if last char is a space and last-1 is not a space
        if (numbers[length - 1] == ' ') {
            count--;
        }
        
        printf("%d\n", count);
        
        current_tc++;
    }
    
    return 0;
} // end main
