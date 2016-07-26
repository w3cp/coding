// ac
// github.com/w3cp/
// http://cpbook.subeen.com/2016/02/blog-post_15.html?m=1

#include <stdio.h>

int main()
{
    int num = 1000;
    printf("%d", num);
    num--;
    while (num > 1) {
        if (num % 5 == 0) {
            printf("\n");
        } else {
            printf("\t");
        }
        printf("%d", num);
        num--;
    }
    printf("\t1\n");
    return 0;
}
