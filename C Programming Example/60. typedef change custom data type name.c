///Change custom data type name using typedef
#include<stdio.h>
struct book{   ///custom data type
    char name[20];   ///custom data member
    int price;
};
int main()
{
    typedef struct book Book;   ///book changed to Book
    Book b = {"C++ Book", 250};  ///variable declaration and initialization
    ///printing values
    printf("Book name : %s\n",b.name);
    printf("Book price : %d\n",b.price);

    return 0;
}
