#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    time_t t;
    srand((unsigned) time(&t));
    for(i = 1; i<7; i++)
        printf("%d\n", rand()%6);

    return 0;
}

