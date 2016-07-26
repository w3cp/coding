// accepted
// github.com/w3cp/
// http://cpbook.subeen.com/2012/12/gonok.html?m=1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        int i;
        int start[3]; // HH MM SS
        int stop[3];
        int total_time[3];
        int total_sec;
        int total_step;
        int tiles_per_step;
        int total_tiles;
        
        scanf("%d %d %d", &start[0], &start[1], &start[2]);
        scanf("%d %d %d", &stop[0], &stop[1], &stop[2]);
        scanf("%d", &tiles_per_step);
        
        if (stop[0] < start[0]) {
            stop[0] = 24 + stop[0];
        }
        
        total_time[0] = stop[0] - start[0];
        total_time[1] = stop[1] - start[1];
        total_time[2] = stop[2] - start[2];
        
        total_sec = (total_time[0] * 3600) + (total_time[1] * 60) + total_time[2];
        total_tiles = total_sec * tiles_per_step;
        
        printf("%d\n", total_tiles);
        current_tc++;
    }
    
    return 0;
} // end main
