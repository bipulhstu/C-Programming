///Print palindrome number upto n
#include<stdio.h>
int main()
{
    int i, temp=0, reverse=0, n, num;
    printf("Enter the limit of the series:\n");
    scanf("%d",&n);
    for(num=1; num<=n; num++)
    {
        temp=num;
        i=num;
        reverse=0;
        while(i!=0)
        {
            reverse=reverse*10;
            reverse=reverse+i%10;
            i=i/10;
        }
        if(temp==reverse)
              printf("%d\n",temp);
    }
    return 0;
}
