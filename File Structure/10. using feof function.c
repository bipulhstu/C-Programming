///int feof(FILE *stream)
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("input4.txt","r");
    ///open file in reading mode
    if(fp==NULL)
    {
        printf("Error or there is no such file with this name.\n");
        return 0;
    }
    do{
        ch=fgetc(fp);
    }
    while(ch!=EOF);
    if(feof(fp))
        printf("File reading has been finished.\n");
    fclose(fp);


    return 0;
}



