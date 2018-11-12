///char fgets(char *str, int n, FILE *stream)
#include<stdio.h>
int main()
{
    FILE *fp;
    char s[300];
    int a, b, sum;
    fp = fopen("input2.txt","r");
    ///open file in reading mode
    if(fp==NULL)
    {
        printf("Error or there is no such file with this name.\n");
        return 0;
    }
    if(fgets(s, 100, fp)==NULL) ///formatted input
    {
        printf("No input in this file.\n");
        return 0;
    }
    puts(s);
    fclose(fp);


    return 0;
}


