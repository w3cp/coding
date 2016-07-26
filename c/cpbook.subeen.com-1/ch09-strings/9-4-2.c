#include <stdio.h>

int main()
{
    char country[] = {'b', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 's', 'H'};
    int i, length;
    printf("%s\n", country);
    length = 10;
    for (i = 0; i < length; i++) {
        if (country[i] >= 65 && country[i] <= 90) {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s\n", country);
    return 0;
}
