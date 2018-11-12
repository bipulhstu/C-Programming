#include<stdio.h>
///Global structure declaration
struct Person{
    int age;        ///structure member
    float salary;  ///structure member
};
int main()
{
    struct Person person1 = { 25, 24550.25}; ///1. directly initialize
    struct Person person2, person3;
    ///2. element wise initialization
    person2.age = 24;
    person2.salary = 25550.75;

    ///3. structure variables initialization
    person3 = person2;


    printf("Person1 Information : \n");
    printf("\tAge : %d\n",person1.age);
    printf("\tSalary : %.2f\n\n",person1.salary);

    printf("Person2 Information : \n");
    printf("\tAge : %d\n",person2.age);
    printf("\tSalary : %.2f\n\n",person2.salary);

    printf("Person3 Information : \n");
    printf("\tAge : %d\n",person3.age);
    printf("\tSalary : %.2f\n",person3.salary);

    return 0;
}
