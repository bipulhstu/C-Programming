///Passing structure variable to function
#include<stdio.h>
///Global structure declaration
struct Person{
    char name[50];
    int age;        ///structure member
    float salary;  ///structure member
};
void display(struct Person p)
{
    printf("\nInformation for person1 : \n");
    printf("\tName : %s\n",p.name);
    printf("\tAge : %d\n",p.age);
    printf("\tSalary : %.2f\n",p.salary);
}
int main()
{
    struct Person person1;
    strcpy(person1.name, "Bipul Islam");
    person1.age = 24;
    person1.salary = 15550.65;

    display(person1);

    getch();

}
