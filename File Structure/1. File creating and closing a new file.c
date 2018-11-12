///Creating a new file and closing this file
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    file = fopen("test.txt", "w");  ///fileopen(fopen)

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
        printf("File is opened.\n");

    fclose(file);

    return 0;
}
