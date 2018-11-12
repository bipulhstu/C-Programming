#include<stdio.h>
void maximum(int x[])
{
    int i, max = x[0];
    for(i = 0; i<5; i++)
    {
        if(max<x[i])
            max= x[i];
    }
    printf("%d\n",max);
}
int main()
{
    int num[5] = {10, 20,30, 40, 50};
    maximum(num);

}

