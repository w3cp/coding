#include <stdio.h>

int main()
{
    int grid[10][10];
    int x, y, num, i, j;
    char ch;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            grid[i][j] = 1;
        }
    }
    printf("Please enter the number of blocked cells : ");
    scanf("%d", &num);
    printf("Now enter the cells : ");
    for (i = 0; i < num; i++) {
        scanf("%d %d", &x, &y);
        grid[x][y]=0;
    }
    printf("Please enter the initial position : ");
    scanf("%d %d", &x, &y);
    printf("Now enter your command one by one : \n\tFor up enter u, for down enter d, for left enter l, for right enter r and to stop enter s (all command should be lower case letter).\n");
    while (1) {
        scanf("%c", &ch);
        if (ch == 's') {
            break;
        }
        else if (ch == 'u') {
            x--;
            if (grid[x][y] == 0) {
                x++;
            }
        }
        else if (ch == 'd') {
            x++;
            if (grid[x][y] == 0) {
                x--;
            }
        }
        else if (ch == 'r') {
            y++;
            if (grid[x][y] == 0) {
                y--;
            }
        }
        else if (ch == 'l') {
            y--;
            if (grid[x][y] == 0) {
                y++;
            }
        }
    }
    printf("Final position of the robot is : %d, %d\n", x, y);
    return 0;
}
