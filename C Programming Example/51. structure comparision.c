///Structure Comparision
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

    if(person1.age == person2.age)
        printf("Person1 age is similar to person2 age\n");
    else
        printf("Person1 age is not similar to person2 age\n");



    return 0;
}
