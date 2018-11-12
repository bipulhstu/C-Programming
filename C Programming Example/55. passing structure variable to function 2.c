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
        printf("\nInformation : \n");
        printf("\tName : %s\n",p.name);
        printf("\tAge : %d\n",p.age);
        printf("\tSalary : %.2f\n",p.salary);
}
int main()
{
    struct Person person[4];
    int i;
    for(i = 0; i<4; i++)
    {
        printf("\nEnter information for person %d\n",i+1);
        printf("\tEnter name : ");
        fflush(stdin);    ///flushing
        gets(person[i].name);

        printf("\tEnter age : ");
        scanf("%d",&person[i].age);
        printf("\tEnter salary : ");
        scanf("%f",&person[i].salary);
    }

    ///printing information
    for(i = 0; i<4; i++)
    {
        display(person[i]);

    }

    getch();
}



