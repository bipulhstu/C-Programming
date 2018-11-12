///finite Recursion
#include<stdio.h>
void recurse()
{
    static count = 1;
    if(count > 5)
        return;  ///or break;

    printf("Count = %d\n", count);
    count = count + 1;
    recurse();

}
int main()
{
    recurse();

    return 0;
}




