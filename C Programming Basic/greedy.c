#include<cs50.h>
#include<stdio.h>
int main(void)
{
    float changee;
    int  count=0;
    do {
        changee = get_float("O hai! How much change is owed?\n");

    }
    while(changee<0.0);
     changee=changee*100.0;
     int change=(float)changee;
    while(change>=25)
    {
        change=change-25;
        count=count+1;

    }
    while(change< 25 && change>=10)
    {
        count=count+1;
        change=change-10;
    }
    while(change< 10 && change>=5)
    {
        count=count+1;
        change=change-5;
    }
    while(change< 5 && change>=1)
    {
        count=count+1;
        change=change-1;
    }
    printf("%i\n",count);
}
