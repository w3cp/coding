#include <stdio.h>

int main()
{
     char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
     int row;
     for (row = 0; row < 7; row++) {
         printf("%s\n", saarc[row]);
     }
     return 0;
}
