#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    fp3 = fopen("new_file.txt", "w");

    if(fp1==NULL || fp2==NULL)
    {
        printf("Error in opening file.\n");
        return 0;
    }

    while (1)
    {
        ch = fgetc(fp1);

        if (ch == EOF)
            break;
        else
            putc(ch, fp3);
    }

    while (1)
    {
        ch = fgetc(fp2);

        if (ch == EOF)
            break;
        else
            putc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);


    return 0;
}
