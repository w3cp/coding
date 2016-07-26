#include <stdio.h>

void draw_line(char c, int times) {
    printf("\n");
    int count = times / 5;
    for (int i = 0; i < count; i++) {
        printf("%c%c%c%c%c", c, c, c, c, c);
    }
    printf("\n\n");
}

int main()
{
    int grid[10][10];
    int x, y, num, i, j;
    char ch;
    char id[] = "jannat@root:/ $";
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            grid[i][j] = 1;
        }
    }
    draw_line('*', 50);
    printf("\t\t A simple funny ROBO\n");
    draw_line('*', 55);
    printf("%s Please enter the number of blocked cells : ", id);
    scanf("%d", &num);
    printf("%s Now enter the cells : \n", id);
    for (i = 0; i < num; i++) {
        printf(">>> ");
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }
    printf("%s Please enter the initial position : ", id);
    scanf("%d %d", &x, &y);
    draw_line('-', 40);
    printf("%s Now enter your [commands] one by one : \n\t--u for up enter u,\n", id);
    printf("\t--d for down enter d, \n\t--l for left enter l, \n\t--r for right enter r,\n");
    printf("\t--s and to stop enter s (all commands should be lower case). *\n");
    while (1) {
        printf(">>> ");
        scanf("%c", &ch);
        if (ch == 's') {
            break;
        }
        else if (ch == 'u') {
            if (grid[x-1][y] == 1) {
                x--;
            }
        }
        else if (ch == 'd') {
            if (grid[x+1][y] == 1) {
                x++;
            }
        }
        else if (ch == 'r') {
            if (grid[x][y+1] == 1) {
                y++;
            }
        }
        else if (ch == 'l') {
            if (grid[x][y-1] == 1) {
                y--;
            }
        }
    }
    draw_line('-', 50);
    printf("%s Final position of the robot is : %d, %d\n", id, x, y);
    draw_line('#', 79);
    return 0;
}
