#include<stdio.h>
#include<string.h>
int main()
{
    int n, count=0, i, j, len;
    char ch[100];
    scanf("%d",&n);
    while(n--)
{
       getchar();
        scanf("%[^\n]s",ch);

        len=strlen(ch);
        for(j=0; ch[j]!='\0'; j++)
        {
            if(ch[j]==' ')
                 count++;
        }
        printf("%d\n",count+1);
        count=0;
}

}
