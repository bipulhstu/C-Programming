#include <stdio.h>
int fibo(int);

int main()
{
    int num, t;
    scanf("%d",&t);
    while(t--){
    int result;
        scanf("%d", &num);
        result = fibo(num);
        printf("%d\n",result);
    }

    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
