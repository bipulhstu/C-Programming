#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    char str[100];
    fp = fopen("input7.txt","r+");
    ///open file in reading mode & writing mode
    do{
        ch=fgetc(fp);
        if(ch!=EOF)
            putchar(ch);
    }
    while(ch!=EOF);
    puts(" ");  ///next line
    gets(str);
    fputs(str, fp);
    fclose(fp);


    return 0;
}



