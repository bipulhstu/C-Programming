#include<stdio.h>
int main()
{
    int i, n, num[101];
    scanf("%d", &n);
    for( i=0; i<n; i++)
    {
        scanf("%s", num);
        if (num%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
