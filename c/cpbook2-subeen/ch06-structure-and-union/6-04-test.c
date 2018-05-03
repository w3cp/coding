#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[40];
};

int main()
{
    struct student one;
    
    scanf("%d", &one.id);
    scanf(" %[^\n]", one.name);
    
    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);
    
    return 0;
}