#include <stdio.h>

struct Record {
    char name[10];
    char phone[15];
    char email[15];
};

int main()
{
    struct Record a, b;
    printf("Enter name: ");
    scanf("%s", &a.name);
    printf("Enter phone: ");
    scanf("%s", &a.phone);
    printf("Enter email: ");
    scanf("%s", &a.email);
    
    b = a;
    
    printf("Name: %s, Phone: %s, Email: %s\n", b.name, b.phone, b.email);
    
    return 0;
}
