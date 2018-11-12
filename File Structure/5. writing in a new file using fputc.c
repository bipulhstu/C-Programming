///fputc(int ch, FILE *fp)
#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt","w");
    if(fp==NULL)
        printf("Error in opening file\n");
    else
    {
        char str[]="Who are you?"; ///c string which we want to save in the file
        int index=0;
        ///now we will keep string in the file
        while(str[index])
        {
            if(fputc(str[index],fp)==EOF)
            {
                printf("Error in writing file\n");
                break;
            }
            index++;
        }
    }
    return 0;

}
