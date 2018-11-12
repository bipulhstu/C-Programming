///Reading a file by fgets() = file get string
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
            ///fgets(variable, size, file pointer);
            fgets(ch, 40, file); ///get 10 character from the file
            printf("%s\n",ch);  ///print 10 character from the file
        }
        fclose(file); ///close the file
    }

    return 0;
}



