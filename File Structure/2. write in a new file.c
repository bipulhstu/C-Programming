#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("country.txt","w");
    fprintf(fp, "I live in Bangladesh");
    fclose(fp);

    return 0;
}
