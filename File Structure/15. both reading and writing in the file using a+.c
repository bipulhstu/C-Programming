#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("test.txt","a+");
    ///open file in reading mode & writing mode
    do{
        ch=fgetc(fp);
        if(ch!=EOF)
            putchar(ch);
    }
    while(ch!=EOF);
    fprintf(fp,"testing fprintf.....\n");
    fputs("testing fputs.....\n",fp);

    fclose(fp);

    return 0;
}




