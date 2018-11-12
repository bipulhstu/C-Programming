#include<stdio.h>
#include<string.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	  getchar();
	    char s[100000];
	    //gets(s);
	    scanf("%[^\n]s",s);
	    int len, i, lower=0, upper=0, number=0, character=0;
	    len=strlen(s);
	    for(i=0; i<len; i++)
	    {
	        if(s[i]>='A' && s[i]<='Z')
	        upper++;
	        else if(s[i]>='a' && s[i]<='z')
	        lower++;
	        else if(s[i]>='0' && s[i]<='9')
	         number++;
	        else
	        character++;
	    }
	    printf("%d\n%d\n%d\n%d\n",upper,lower,number,character);

	}
	return 0;
}
