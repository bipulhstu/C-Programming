#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("input5.txt","r");   ///open file in reading mode
    fp2 = fopen("output5.txt","w");  ///open file in writing mode

    if(fp1==NULL)
    {
        printf("Error or there is no such file with this name.\n");
        return 0;
    }
    if(fp2==NULL)
    {
        printf("Error in writing.\n");
        return 0;
    }
    do{
        ch=fgetc(fp1);
        if(ch!=EOF)
            fputc(ch, fp2);
    }
    while(ch!=EOF);
    fclose(fp1);
    fclose(fp2);


    return 0;
}



