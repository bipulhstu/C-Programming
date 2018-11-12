#include<stdio.h>
int main()
{
    int n, count, i;
    printf("Please Enter a number to count how many 1 it has: ");
    scanf("%d", &n);
    count = 0;
    while(n)
    {
        if(n & 1)
            count++;
        n = n >> 1;
    }
    printf("Number of 1 is %d\n",count);

    return 0;
}
