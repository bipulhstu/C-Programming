#include <stdio.h>

int main()
{
   FILE *fp1, *fp2;
   char ch;

   fp1 = fopen("file1.txt", "r");
   fp2 = fopen("file2.txt", "a+");

   if(fp1==NULL || fp2==NULL)

   {
      printf("Error in opening file.\n");
      return 0;
   }

   while (1) {
      ch = fgetc(fp1);

      if (ch == EOF)
         break;
      else
         putc(ch, fp2);
   }

   fclose(fp1);
   fclose(fp2);

   return 0;
}
