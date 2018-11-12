#include<stdio.h>
int main()
{
    FILE *f;
    f = fopen("wow.txt","w");
    fputs("I love my country.",f);
    fclose(f);

    return 0;
}
