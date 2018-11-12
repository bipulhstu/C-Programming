///Reading a file by fgetc()
#include<stdio.h>
int main()
{
    FILE *file;    ///file pointer declaration
    char ch;
    file = fopen("test.txt", "r");  ///r = reading mode

    if(file == NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        while(! feof(file))
        {
            ch = fgetc(file); ///get one by one character from the file
            printf("%c\n",ch);///print one by one character from the file
        }
        fclose(file); ///close the file
    }

    return 0;
}


