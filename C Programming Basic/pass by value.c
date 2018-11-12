#include<stdio.h>
#include<conio.h>
void display(int , int);
int main()
{
    int x, y;
    x=34;
    y=35;
    printf("Before function call\nx=%d and y=%d\n", x, y);
    display(x,y);
    printf("After function call\nx=%d and y=%d\n", x, y);
    return 0;
}
void display(int a, int b)
{
    printf("a=%d and b=%d\n", a, b);
    a=20;
    b=30;
    printf("a=%d and b=%d\n", a, b);
}
