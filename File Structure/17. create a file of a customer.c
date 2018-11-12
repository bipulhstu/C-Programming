#include<stdio.h>
int main()
{
    FILE *fp;
    char customername[100];
    char customerfile[250];

    int id;
    printf("Customer Name: ");
    scanf("%s",customername);

    sprintf(customerfile,"%s.txt",customername);
    fp= fopen(customerfile, "w");

    printf("Enter ID: ");
    scanf("%d",&id);

    fprintf(fp, "ID name: %d\n", id);
    fclose(fp);
}
