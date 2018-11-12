#include<stdio.h>
int main()
{
    int T, opponet_run, current_run, ball_remaining, target_run;
    double over_played, over_remaining;
    double current_run_rate, requied_run_rate;
    scanf("%d", &T);
    while( T--)
    {
        scanf("%d %d %d", &opponet_run, &current_run, &ball_remaining);
        target_run=opponet_run+1;
        over_played=(300-ball_remaining)/6.0;
        over_remaining=ball_remaining/6.0;
        current_run_rate=current_run/over_played;
        requied_run_rate=(target_run-current_run)/over_remaining;
        printf("%.2lf %.2lf\n",current_run_rate, requied_run_rate);
    }
    return 0;
}
