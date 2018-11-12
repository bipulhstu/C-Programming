///Create a new FILE
#include<stdio.h>
int main()
{
    FILE *f; ///Pointer declaration of FILE type
    f = fopen("testing.txt","w");  ///Create a testing.txt file
    fclose(f);  ///Close the file
    return 0;
}
