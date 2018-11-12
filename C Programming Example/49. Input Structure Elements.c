///structure introduction
/* Structure is a collection of variables of different
   types under a single name.
   A structure is a user-defined data type in C/C++
*/
///Input Structure Elements
#include<stdio.h>
///Global structure declaration
struct Person{
    int age;        ///structure member
    float salary;  ///structure member
};
int main()
{
    struct Person person1, person2;///Here Person is user defined data type

    printf("Enter Information for Person1 : \n");
    printf("\tEnter age : ");
    scanf("%d",&person1.age);
    printf("\tEnter salary : ");
    scanf("%f",&person1.salary);

    printf("Enter Information for Person2 : \n");
    printf("\tEnter age : ");
    scanf("%d",&person2.age);
    printf("\tEnter salary : ");
    scanf("%f",&person2.salary);

    printf("\nPerson1 Information : \n");
    printf("\tAge : %d\n",person1.age);
    printf("\tSalary : %.2f\n\n",person1.salary);

    printf("\nPerson2 Information : \n");
    printf("\tAge : %d\n",person2.age);
    printf("\tSalary : %.2f\n",person2.salary);

    return 0;
}

