#include<stdio.h>
#include<string.h>
int main()
{
	//code
	int i,t;
	char s[10000];
	scanf("%d",&t);
	while(t--)
	{
	    getchar();
	    int count=0;
	    scanf("%[^\n]s",s);
	    int len;
	    len=strlen(s);
	    for(i=0; i<len; i++)
	    {
	        if(s[0]==s[i])
	          count++;
	    }
	    if(count==len)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}

	return 0;
}
