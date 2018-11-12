#include<stdio.h>
#include<conio.h>
#define CHECK(number) if(number>=0){\
    printf("The number is greater than 10");\
      }    else{   \
    printf("The number is less than 10");\
      }
int main()
{

    CHECK(25);
    return 0;
}
