// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/shobdo-bepari.html?m=1


#include <stdio.h>
#include <string.h>

int PRICE_PER_WORD = 420;

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while(current_tc < tc) {
        int i = 0; // loop
        char words[1001];
        int length;
        int cost;
        
        //int WORD_BEGIN = 0;
        int count = 1; // there is at least one words
        
        getchar(); // required to remove previous input
        gets(words);
        //scanf("%[^\n]", words);
        
        length = strlen(words);
        
        while (i < length) {
            if (words[i] == ' ' && words[i - 1] != ' ') {
                count++;
            }
            i++;
        }
        
        // what to do if last char is a space and last-1 is not a space
        if (words[length - 1] == ' ') {
            count--;
        }
        
        cost = count * PRICE_PER_WORD;
        
        printf("%d\n", cost);
        
        current_tc++;
    }
    
    return 0;
} // end main
