#include<stdio.h>
int main()
{
    int a[15];
    int start=0, end=14, mid, search, i;
    printf("Enter 15 elements in the array.(ascending order)::\n");
    for(i=0; i<=14; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a element for search::");
    scanf("%d", &search);
    do{
        mid=(int)((start+end)/2);
        if(a[mid]==search){
            printf("%d is found in the %dth position.\n", search, mid+1);
        break;
        }
        else if(a[mid]>search)
            end=mid-1;
        else if(a[mid]<search)
            start=mid+1;
    }
    while(start<=end);
    if(start>end)
        printf("%d is not found in the array.\n", search);
    return 0;
}
