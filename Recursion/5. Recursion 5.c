///finite Recursion
#include<stdio.h>
void recurse(int count)
{
    if(count == 5)
        return;  ///or break;
    printf("Count1 = %d\n", count);
    recurse(count+1);
    printf("Count = %d\n", count);

}
int main()
{
    recurse(1);

    return 0;
}




