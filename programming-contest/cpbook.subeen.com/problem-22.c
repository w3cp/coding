// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/pyramid.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int height;
        scanf("%d", &height);
        
        int i;
        int current_line;
        int star, space;
        
        for (current_line = 1; current_line <= height; current_line++) {
            star = (current_line * 2) - 1;
            for (space = height - 1; space >= current_line; space--) {
                printf(" "); // print space 
            }
            for (i = 0; i < star; i++) {
                printf("*"); // print star
            }
            printf("\n");
        }
        
        //printf("\n");
        
        current_tc++;
    }
    
    return 0;
} // end main
