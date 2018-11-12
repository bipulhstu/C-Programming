///Author Bipul Islam
///Programming Assignment 1.2:Leap Year
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%100 == 0 && year%400==0)
        printf("YES\n");
    else if (year %100==0 && year%4==0)
        printf("YES\n");
    else if(year%100 != 0 && year%4==0)
        printf("YES\n");
    else
        printf("NO\n");
}
