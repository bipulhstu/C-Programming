#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("test1.txt","r");
    fp2 = fopen("test2.txt","r");

    char a, b;
    int flag;
    /*
    flag=0, means two files are not equal
    flag=1, means two files are equal
    */
    flag=1;  ///consider two files are equal
    do{
        a = fgetc(fp1);
        b = fgetc(fp2);
        if(a!=b)
        {
            flag=0;
            break;
        }
    }
    while(a!=EOF && b!=EOF);
    if(flag==1)
        printf("Two files are equal.\n");
    else
        printf("Two files are not equal.\n");

    return 0;
}
