#include<stdio.h>
#include<string.h>
int factorial(int n)
{
    int fact=1, result=0;
    int i;
    for(i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    char s[200];
    int count = 0, i, t;
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        count = 0;
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;
    }
    printf("%d\n", factorial(count + 1));
    }

    return 0;
}
