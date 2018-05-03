#include <stdio.h>
#include <string.h>

typedef struct {
    char first[20];
    char last[20];
} nametype;

typedef struct {
    int id;
    nametype name;
    char grade[3];
} studenttype;

void calculate_grade(char *grade, int mark)
{
    if (mark >= 80) strcpy(grade, "A+");
    else if (mark >= 70) strcpy(grade, "A");
    else if (mark >= 60) strcpy(grade, "A-");
    else if (mark >= 50) strcpy(grade, "B");
    else if (mark >= 40) strcpy(grade, "C");
    else strcpy(grade, "F");
}

int main()
{
    studenttype student[3];
    int i, n = 3;
    int marks[] = {72, 82, 60};
    
    for (i = 0; i < n; i++) {
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);
        
        printf("Enter the first name for student %d: ", i+1);
        scanf("%s", student[i].name.first);
        
        printf("Enter the ID for student %d: ", i+1);
        scanf("%s", student[i].name.last);
        
        strcpy(student[i].grade, "");
        printf("\n");
    }
    
    for (i = 0; i < n; i++) {
        calculate_grade(&student[i].grade, marks[i]);
    }
    
    printf("Output: \n\n");
    
    for (i = 0; i < n; i++) {
        printf("ID: %d\n", student[i].id);
        printf("Name: %s %s\n", student[i].name.first, 
            student[i].name.last);
        printf("Grade: %s\n", student[i].grade);
    }
    
    return 0;
} 