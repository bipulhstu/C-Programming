///Reading a file by fgets() = file get string
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    char name[20];
    file = fopen("test.txt", "r");  ///r = reading mode

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        ///fscanf(file pointer, format specifier, variable name);
        fscanf(file, "%s", &name); ///get name from file
        printf("%s\n", name); ///print the name
        fclose(file); ///close the file
    }

    return 0;
}




