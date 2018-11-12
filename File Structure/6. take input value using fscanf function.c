///int fscanf(FILE *stream, const char *format,.....)
#include<stdio.h>
int main()
{
    FILE *fp;
    int a, b, sum;
    fp = fopen("input.txt","r");
    ///open file in reading mode

    if(fp==NULL)
    {
        printf("Error or there is no such file with this name.\n");
        return 0;
    }
    else if(fscanf(fp, "%d%d",&a,&b)==EOF) ///formatted input
    {
        printf("No input in this file.\n");
        return 0;
    }
    sum=a+b;
    printf("%d\n",sum);


    return 0;
}
