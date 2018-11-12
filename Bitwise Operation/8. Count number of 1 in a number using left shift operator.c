#include<stdio.h>
#include<limits.h>

int main()
{
    int n = 32, count, i, num;
    ///int n = sizeof(int)*CHAR_BIT;
    printf("Please Enter a number to count how many 1 it has: ");
    scanf("%d", &num);
    count = 0;
    for(i = 0; i<n; i++)
    {
        if(num & (1 << i))
            count++;
    }
    printf("Number of 1 is %d\n",count);

    return 0;
}

