///int fgetc(FILE *stream)
#include<stdio.h>
int main()
{
    FILE *fp;
    int cnt;
    char ch;
    fp = fopen("input3.txt","r");
    ///open file in reading mode
    if(fp==NULL)
    {
        printf("Error or there is no such file with this name.\n");
        return 0;
    }
    cnt=0;
    do{
        ch=fgetc(fp);
        cnt++;
    }
    while(ch!=EOF); ///check the file reading is finished or not

    printf("Number of character in this file: %d\n",cnt-1);
    fclose(fp);
    return 0;
}


