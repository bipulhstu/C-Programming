///writing to a file by fputc() = file put character
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    char name[20] = "Bipul Islam"; ///char type array
    file = fopen("test.txt", "w");  ///fileopen(fopen)
    int i, length = strlen(name); ///length of the name

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        for(i = 0; i<length; i++)
        {
            fputc(name[i], file);
        ///putting one by one character into file
        }
        printf("File is written successfully.\n");
    }


    fclose(file);

    return 0;
}
