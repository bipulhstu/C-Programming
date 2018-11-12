# include <stdio.h>
#include<stdbool.h>
# define NO_OF_CHARS 256

/* function to check whether two strings are anagram of
   each other */
bool areAnagram(char *str1, char *str2)
{
    // Create 2 count arrays and initialize all values as 0
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;

    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // If both strings are of different length. Removing this
    // condition will make the program fail for strings like

    if (str1[i] || str2[i])
      return false;

    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;

    return true;
}

/* Driver program to test to print print*/
int main()
{
    char str1[100];
    char str2[100] ;
    scanf("%s%s",str1,str2);
    if ( areAnagram(str1, str2) )
      printf("YES\n");
    else
      printf("NO\n");

    return 0;
}

