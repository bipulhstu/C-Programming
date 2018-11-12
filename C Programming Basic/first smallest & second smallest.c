#include<stdio.h>
int main()
{
	//code
	int i, j, k, t, num[1000], n, fmin, smin;
	scanf("%d",&t);
	while(t--)
	{

	    scanf("%d",&n);
	    for(i=0; i<n; i++)
	    {
	        scanf("%d",&num[i]);
	        fmin=num[0];
	        if(num[i]<fmin)
	            fmin=num[i];
	    }
	    printf("%d\n",fmin);
	}
	return 0;
}
