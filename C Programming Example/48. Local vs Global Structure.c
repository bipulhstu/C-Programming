///structure introduction
/* Structure is a collection of variables of different
   types under a single name.
   A structure is a user-defined data type in C/C++
*/
#include<stdio.h>
///Global structure declaration
struct Person{
    int age;        ///structure member
    float salary;  ///structure member
};
struct Person person1, person2; ///global variable
int main()
{
    ///struct Person person1, person2; ///local variable
     /*
     ///Local structure declaration
        struct Person
        {
             int age;        ///structure member
             float salary;  ///structure member
        };*/
    person1.age = 27;
    person1.salary = 2500.75;
    person2.age = 25;
    person2.salary = 2500.50;

    printf("Person1 Information : \n");
    printf("\tAge : %d\n",person1.age);
    printf("\tSalary : %.2f\n\n",person1.salary);

    printf("Person2 Information : \n");
    printf("\tAge : %d\n",person2.age);
    printf("\tSalary : %.2f\n",person2.salary);

    return 0;
}

