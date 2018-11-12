#include <stdio.h>
int main()
{
    int N, i, sum=0, num, last, first;
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        sum=0;
        scanf("%d", &num);
        first=sum+num%10;
        while(num !=0)
        {
            last=num;
            num=num/10;
        }
        sum=first+last;
     printf("%d\n", sum);
    }
    return 0;
}