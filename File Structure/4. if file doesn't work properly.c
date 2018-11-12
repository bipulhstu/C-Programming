///If file doesn't work properly then check if file is NULL
#include<stdio.h>
int main()
{
    FILE *f;
    f = fopen("hello.txt","w");
    if(f==NULL)
        printf("Error!!\n");
    else
        printf("FILE has been opened.\n");


    return 0;
}

