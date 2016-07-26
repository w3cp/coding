// accepted
// github.com/w3cp/
// cpbook.subeen.com/2012/11/rectangle-1.html?m=1

#include <stdio.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int length, width, height;
        int area;
        scanf("%d %d %d", &length, &width, &height);
        area = length * width * height;
        printf("%d\n", area);
        current_tc++;
    }
    
    return 0;
}
