#include <stdio.h>
#include <string.h>

struct nametype {
    char first[20];
    char last[20];
};

struct studenttype {
    int id;
    struct nametype name;
};

int main()
{
    struct studenttype student[5];
    int i, n = 5;
    
    for (i = 0; i < n; i++) {
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the first name for student %d: ", i+1);
        scanf("%s", student[i].name.first);
        printf("Enter the last name for student %d: ", i+1);
        scanf("%s", student[i].name.last);
        printf("\n");
    }
    
    printf("Output: \n\n");
    
    for (i = 0; i < n; i++) {
        printf("ID: %d\n", student[i].id);
        printf("Name: %s %s\n", student[i].name.first, 
            student[i].name.last);
    }
    
    return 0;
}
