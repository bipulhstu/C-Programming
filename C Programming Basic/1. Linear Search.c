#include<stdio.h>
int main()
{
    int arr[100], i, j, key, location, check, n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    check=0;
    location=0;
    printf("Enter a value to search:");
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            check=1;
            location=i+1;
            break;
        }
    }
    if(check==1)
        printf("%d found at location %d\n",key, location);
    else
        printf("%d did not found.\n",key);
    return 0;
}
