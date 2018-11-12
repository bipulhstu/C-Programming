#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, k, n, len;
    char s[1001], tname[1001],name[1001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s", name);
        //strcpy(s, name);
        len=strlen(name);
        for(j=len-1,k=0; j>=0; j--,k++)
            tname[k]=name[j];
        tname[k]='\0';
        if(strcmp(name,tname)==0)
        {

            printf("YES! It is Palindrome!\n");
            //printf("%s\n",tname);
        }

        else
        {
            printf("Sorry! It is not Palindrome!\n");
            //printf("%s\n",tname);
        }


    }
    return 0;
}
