///Bipul Islam, B.Sc in EEE, HSTU
#include<stdio.h>
#include<conio.h>
int addition(int a, int b);
int subtraction (int a , int b);

int main ()
{


    int x, y, c;
    printf("Enter two number: \n");
    scanf("%d%d",&x,&y);
    addition(x,y);
    c=subtraction(x,y);
    printf("Subtraction = %d\n",c);

    getch();
    return 0;
}
int addition(int a, int b)
{
    int add;
    add=a+b;
    printf("Addition = %d\n",add);
}
int subtraction (int a , int b)
{
    int sub;
    sub=a-b;
    return sub;
}
