#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    while(n--)
    {
        char str1[30], str2[30], str3[30], str4[100];
        scanf("%s%s%s",str1,str2,str3);
        strcat(str1,str2);
        strcat(str1,str3);
        printf("%s\n",str1);

    }

}


