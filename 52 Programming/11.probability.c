#include<string.h>
#include<stdio.h>
int main()
{
    int t,k,n,i,j,count=0;
    long long int f=1;
    char s[20];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;
    }

        n=count+1;
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        printf("%llf\n",f);
    }
    return 0;
}
