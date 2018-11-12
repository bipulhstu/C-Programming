///int char(const char *filename)
#include<stdio.h>
int main()
{
    char str[100]="input6.txt"; ///which file we want to delete

    remove(str);

    return 0;

}
