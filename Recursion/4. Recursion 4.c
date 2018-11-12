///finite Recursion
#include<stdio.h>
void recurse(int count)
{
    if(count == 5)
        return;  ///or break;

    recurse(count+1);
    printf("Count = %d\n", count);

}
int main()
{
    recurse(1);

    return 0;
}



