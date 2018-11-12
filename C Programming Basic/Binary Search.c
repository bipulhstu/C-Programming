#include<stdio.h>
int main()
{
    int a[13]={12, 23 ,30, 32, 38, 42 , 50, 60, 65, 70, 85, 90, 100};
    int i, start, end, mid, key;
    start=0;
    end=12;
    key=32;
    do{
        mid=(int)((start+end)/2);
        printf("Start:%d\tEnd:%d\tMid:%d\tKey:%d\ta[mid]:%d\n", start, end, mid, key, a[mid]);
        if(a[mid]==key)
        {
            printf("Find at %d\n", mid+1);
            break;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
    }
    while(start<=end);
    if(start>end)
       printf("%d is not found in the array.\n",key );
       printf("Start:%d\tEnd:%d\tMid:%d\tKey:%d\ta[mid]:%d\n", start, end, mid, key, a[mid]);
       return 0;
}
