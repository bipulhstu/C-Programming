///Array of Structure
#include<stdio.h>
///Global structure declaration
struct Person{
    int age;        ///structure member
    float salary;  ///structure member
};
int main()
{
    struct Person person[4];
    int i;
    for(i = 0; i<4; i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("\tEnter age : ");
        scanf("%d",&person[i].age);
        printf("\tEnter salary : ");
        scanf("%f",&person[i].salary);
    }

    ///printing information
    for(i = 0; i<4; i++)
    {
        printf("\nInformation for person %d\n",i+1);
        printf("\tAge : %d\n",person[i].age);
        printf("\tSalary : %.2f\n",person[i].salary);
    }

    getch();
}

