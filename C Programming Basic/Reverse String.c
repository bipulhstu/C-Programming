#include<stdio.h>
#include<string.h>
int main()
{
    int n, count=0, i, j, len, temp;
    char ch[100];
    //scanf("%d",&n);
    //while(n--)

        scanf("%[^\n]s",ch);
        len=strlen(ch);
        i=0;
        j=strlen(ch)-1;
        while(i<j)
        {
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
            i++;
            j--;
        }
        printf("%s",ch);



}

