///writing to a file by fprintf()
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    char name[20];
    int age;
    file = fopen("test2.txt", "a");  ///fileopen(fopen) ///a means append

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name: ");
        gets(name); ///Input name
        printf("Enter your age: ");
        scanf("%d",&age); ///Input age
        ///fprintf(file pointer, format specifier, variable);
        fprintf(file, "Name : %s\nAge : %d\n",name, age);
        printf("File is written successfully.\n");
        fclose(file);  ///close this file
    }

    return 0;
}

