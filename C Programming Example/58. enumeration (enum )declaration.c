///An Enumeration is a user defined data type that
///consists of integral constants.
#include<stdio.h>
enum day{  ///enum declaration
    Sun, Mon, Tue, Wed, Thu, Fri, Sat

};
int main()
{
    enum day day1, day2;
    day1 = Sun;    ///index of Sun is 0
    day2 = Wed;   ///index of Wed is 3

    ///printing day values
    printf("day1 = %d\n", day1);
    printf("day2 = %d\n", day2);

    int dif = day2 - day1;
    printf("day2 - day1 = %d\n",dif);

    return 0;
}
