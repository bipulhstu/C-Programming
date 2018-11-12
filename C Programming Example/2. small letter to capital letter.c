#include<stdio.h>
int main()
{
    char small_letter , capital_letter;
    printf("Please, Enter a small letter: ");
    small_letter = getchar();

    capital_letter = small_letter - 32;
    printf("Capital letter of %c is %c\n",small_letter, capital_letter);

    return 0;
}
