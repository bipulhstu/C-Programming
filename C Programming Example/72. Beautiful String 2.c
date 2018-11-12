#include <stdio.h>

void lower_string(char []);

int main()
{
    while(1)
   {
   char string[100];

   printf("Enter a string to convert it into lower case:\n");
   gets(string);

   lower_string(string);

   printf("The string in lower case:\n%s\n", string);
   }

   return 0;
}

void lower_string(char s[]) {
   int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'A' && s[c] <= 'Z') {
         s[c] = s[c] + 32;
      }
      c++;
   }
}
