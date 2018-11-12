///writing to a file by fputs() = file put string
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    char name[20];
    file = fopen("test1.txt", "w");  ///fileopen(fopen)

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name: ");
        gets(name); ///Input name
        ///fputs(string, file)
        fputs(name,file);
        fputs("\n", file);  ///for new line
        printf("File is written successfully.\n");
        fclose(file);  ///close this file
    }

    return 0;
}
