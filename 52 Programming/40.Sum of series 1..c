#include<stdio.h>
#include<math.h>
int main()
{
   int t, i, n, x, k;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d%d",&x,&k);
       int sum=1, r=1;
       for(i=1; i<=k; i++)
       {
           r=r*x;
           sum+=r;
           //printf("%d\n",r);

       }
       printf("Result = %d\n",sum);
   }
   return 0;
}
