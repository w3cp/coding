// accepted
// github.com/w3cp/
// 

#include <stdio.h>
//#include <math.h>
//#include <string.h>

int TOTAL_OVER = 50;
int BALL_PER_OVER = 6;

int main()
{
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    //int current_tc; // do not work without 0 assign
    int current_tc = 0;
    
    scanf("%d", &tc);
    
    while (current_tc < tc) {
        double first_team_total_run, second_team_total_run, ball_left;
        double played_ball;
        double target;
        double current_run_rate, required_run_rate;
        double required_run_to_win;
        
        double total_over_played, total_over_left;
        
        scanf("%lf %lf %lf", &first_team_total_run, &second_team_total_run, &ball_left);
        
        target = first_team_total_run + 1;
        played_ball = (TOTAL_OVER * BALL_PER_OVER) - ball_left;
        
        total_over_played = played_ball / BALL_PER_OVER;
        total_over_left = ball_left / BALL_PER_OVER;
        required_run_to_win = target - second_team_total_run;
        
        current_run_rate = second_team_total_run / total_over_played;
        required_run_rate = required_run_to_win / total_over_left;
        
        printf("%.2lf %.2lf\n", current_run_rate, required_run_rate);
        
        current_tc++;
    }
    
    return 0;
} // end main
