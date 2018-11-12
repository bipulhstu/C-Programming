///জোড়-বিজোড়-১
#include<stdio.h>
int main()
{
    int n, num;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &num);
        if (num%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
