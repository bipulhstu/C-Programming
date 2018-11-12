///Print the address of character and integer
#include<stdio.h>
int main()
{
    char ch1 = 'A', ch2 = 'z';
    int i = 1, j = 100;

    printf("value of ch1 is %c\n",ch1);
    printf("Address of ch1 is %p\n",&ch1);

    printf("value of ch2 is %c\n",ch2);
    printf("Address of ch2 is %p\n",&ch2);

    printf("value of i is %d\n",i);
    printf("Address of ch1 is %p\n",&i);

    printf("value of j is %d\n",j);
    printf("Address of j is %p\n",&j);
}
