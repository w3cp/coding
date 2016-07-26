#include <stdio.h>

struct Record {
    char name[10];
    char phone[15];
    char email[15];
};

int main()
{
    struct Record a[2];
    
    int i;
    
    for (i = 0; i < 2; i++) {
        printf("Enter name: ");
        scanf("%s", a[i].name);
        printf("Enter phone: ");
        scanf("%s", a[i].phone);
        printf("Enter email: ");
        scanf("%s", a[i].email);
    }
    
    for (i = 0; i < 2; i++) {
        printf("Name: %s, Phone: %s, Email: %s\n", a[i].name, a[i].phone, a[i].email);
    }
    
    return 0;
}
