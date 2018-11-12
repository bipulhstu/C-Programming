#include<stdio.h>
int main()
{
	//code
	int t,n;
	long long int maximum, minimum,number;
	scanf("%d",&t);
	while(t--)
	{
	    maximum=0;
	    minimum=1234567890123;
	    scanf("%d",&n);
	    while(n--)
	    {
	        scanf("%lld",&number);
	        if(number>maximum)
	        maximum=number;
	        if(number<minimum)
	        minimum=number;

	    }
	    printf("%lld %lld\n",minimum,maximum);
	}
	return 0;
}
