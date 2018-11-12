///int fscanf(FILE *stream, const char *format,.....)
#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int a, b, sum;
    fp1 = fopen("input.txt","r");
    ///open file in reading mode
    fp2= fopen("output.txt","w");
    ///open file in writing mode

    if(fp1==NULL)
    {
        printf("Error or there is no such file with this name.\n");
        return 0;
    }
    if(fscanf(fp1, "%d%d",&a,&b)==EOF) ///formatted input
    {
        printf("No input in this file.\n");
        return 0;
    }
    sum=a+b;
    fprintf(fp2,"%d\n",sum);


    return 0;
}

