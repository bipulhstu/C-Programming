#include<stdio.h>
void display(char x[])
{
    int i = 0;
    while(x[i] != '\0')
    {
        printf("%c\n", x[i]);
        i++;
    }
}
int main()
{
    char str[] = "Bipul Islam";
    display(str);

}

