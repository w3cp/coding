#include <stdio.h>

int string_length(char c[]);
int string_compare(char a[], char b[]);

int main()
{
    char a[] = {'b', 'a'}, b[] = {'c', 'a'};
    int compare;
    compare = string_compare(a, b);
    if (compare == 0) {
        printf("%s is equal to %s \n", a, b);
    }
    if (compare == 1) {
        printf("%s is greater than %s \n", a, b);
    }
    if (compare == -1) {
        printf("%s is less than %s \n", a, b);
    }
}

int string_length(char c[])
{
    int i;
    for (i = 0; c[i] != '\0'; i++);
    return i;
}

int string_compare(char a[], char b[])
{
    int i, j;
    for (i = 0; a[i] != '\0' && b[i] !='\0'; i++) {
        if (a[i] < b[i]) {
            return -1;
        }
        if (a[i] > b[i]) {
            return 1;
        }
    }
    if (string_length(a) == string_length(b)) {
        return 0;
    }
    if (string_length(a) < string_length(b)) {
        return -1;
    }
    if (string_length(a) > string_length(b)) {
        return 1;
    }
}
