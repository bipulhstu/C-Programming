#include<stdio.h>
#define arr_size 100
#define range 100
int arr[arr_size];  ///Globally declared
int main()
{
    int i, j, n, value;
    printf("Enter the number of values: \n");
    scanf("%d",&n);
    printf("Enter %d elements (1 to 10):\n",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&value);
        arr[value]=arr[value]+1;
    }
    printf("Frequencies of values (1 to 10):\n");
    for(i=1; i<=range; i++)
        printf("arr[%d] = %d\n",i,arr[i]);

    ///for sorted elements
    for(i=1; i<=n; i++)
    {
        if(arr[i]>0)
        {
            for(j=1; j<=arr[i]; j++)
                printf("%d ",i);
        }
    }

    return 0;
}
