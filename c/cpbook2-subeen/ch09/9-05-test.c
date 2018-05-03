#include <stdio.h>

enum COLOR {RED, GREEN, BLUE};

int main() 
{
    enum COLOR selected_color;
    
    int num;
    
    printf("Enter 1 for RED, 2 for GREEN, 3 for BLUE: ");
    scanf("%d", &num);
    
    if (num == 1) selected_color = RED;
    else if (num == 2) selected_color = GREEN;
    else if (num == 3) selected_color = BLUE;
    else if (num == 4) selected_color = PURPLE;
    
    printf("selected_color: %d\n", selected_color);
    
    return 0;
}
