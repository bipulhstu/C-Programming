///Author Bipul Islam
///Programming Assignment 1.3: Power of Two
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPowerOfTwo(int n)
{
    if (n==0)
        return 0;
    while(n!=1)
    {
        if(n%2!=0)
            return 0;
        n/=2;
    }
    return 1;
}
int main(){
    int number;
    scanf("%d",&number);
    isPowerOfTwo(number)?printf("YES\n"): printf("NO\n");

    return 0;
}
