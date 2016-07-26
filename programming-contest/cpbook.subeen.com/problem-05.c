// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/11/ascii-add.html?m=1

#include <stdio.h>

int main()
{
    // freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    // freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        char word[4];
        //scanf("%s", word);
        scanf("%s", &word);
        //gets(word);
        printf("%d\n", word[0] + word[1] + word[2]);
        current_tc++;
    }
    
    return 0;
}
