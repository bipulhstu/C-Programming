///Array within Structure
#include<stdio.h>
///Global structure declaration
struct Person{
    char name[50];
    int age;        ///structure member
    float salary;  ///structure member
};
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
        printf("\nInformation for person %d\n",i+1);
        printf("\tName : %s\n",person[i].name);
        printf("\tAge : %d\n",person[i].age);
        printf("\tSalary : %.2f\n",person[i].salary);
    }

    getch();
}


