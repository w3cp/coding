#include <stdio.h>

int main() {
	int num;
    
    while (1) {
        printf("Please enter your number (0 to exit): ");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        
        if (num & 1) {
            printf("%d is Odd\n\n", num);
        }
        else {
            printf("%d is Even\n\n", num);
        }
    }
	return 0;
}