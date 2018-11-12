///Storing student details using file
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    char name[20];
    int num, i, age, phoneNumber;
    file = fopen("student.txt", "a");  ///fileopen(fopen)

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
        {
            printf("File is opened.\n");
            printf("Enter number of students : ");
            scanf("%d", &num);
            for(i = 1; i<= num; i++)
            {
                printf("Enter student name : ");
                scanf("%s", &name);
                printf("Enter student age : ");
                scanf("%d", &age);
                printf("Enter student phone number : ");
                scanf("%d", &phoneNumber);
                ///printing these information
                fprintf(file, "\n%s\t\t%d\t%d\n", name, age, phoneNumber);
            }
            printf("File is written successfully.\n");
        }

    fclose(file);

    return 0;
}

