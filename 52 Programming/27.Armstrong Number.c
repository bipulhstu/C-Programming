#include<stdio.h>
#include<math.h>
int main()
{
    int t, i, num;
    scanf("%d",&t);
    while(t--)
    {
        int count=0,sum=0,temp,rem;
        scanf("%d",&num);
        temp=num;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(sum==temp)
            printf("%d is an armstrong number!\n",temp);
        else
            printf("%d is not an armstrong number!\n",temp);
    }
    return 0;
}
