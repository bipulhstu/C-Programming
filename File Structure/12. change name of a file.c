///int rename(const char *oldname, const char *newname)
#include<stdio.h>
int main()
{
    char newname[100];
    char oldname[100];

    gets(oldname); ///input new name of the file
    gets(oldname); ///input old name of the file

    rename(oldname,newname);

    return 0;
}
