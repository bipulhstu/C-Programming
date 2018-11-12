///Bipul Islam, B.Sc in EEE, HSTU
///C program to convert minute to hour
#include<stdio.h>
int time(int minute)
{
    int h, m;
    h=minute/60;
    m=minute%60;
    printf("%d minute = %d hour and %d minute\n",minute,h,m);

}
int main(void)
{
    int t;
    printf("Enter time in minute: ");
    scanf("%d",&t);
    time(t);
}
