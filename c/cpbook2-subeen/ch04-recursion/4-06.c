#include <stdio.h>

void recurse(int count)
{
    if (count == 5) {
        return;
    }
    char *s = "Hurrey, I am learning recursion!";
    printf("%s\n", s);
    recurse(count+1);
    return;
}

int main()
{
    recurse(1);
    
    return 0;
}