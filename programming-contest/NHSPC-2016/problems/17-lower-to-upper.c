// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556a0cb1a843fc851d47b4cd

#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    getchar();
    while (current_tc < tc) {
        int i;
        char name[101];
        int length;
        //scanf(" %[^\n]", name);
        gets(name);
        //printf("%s", name);
        length = strlen(name);
        for (i = 0; i  < length; i++) {
            if (name[i] >= 97 && name[i] <= 122) {
                name[i] = 'A' + (name[i] - 'a');
            }
        }
        printf("Case %d: %s\n", current_tc + 1, name);
        current_tc++;
    }
    
    return 0;
} // end main
