#include<stdio.h>
#define Limit 10
#define TOP (Limit+1)
#define NAME "Bipul Islam"
int main()
{
    int number;
    printf(NAME);
    ///printf("Bipul Islam");
    for(number=1; number<=TOP; number++)
    {
        printf("\n%d\n", number);
    }
    return 0;
}
