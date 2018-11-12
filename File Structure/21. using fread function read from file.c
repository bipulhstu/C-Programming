#include <stdio.h>

int main ()
{
    FILE * fp; /* file object এর পয়েন্টার */

    char nbuffer[100]; /* যার মধ্যে ফাইল এর উপাদান গুলো রাখবো */

    fp = fopen ("myfile.txt", "r"); /* লেখার জন্য ফাইল open করবে  */

    fread(nbuffer, sizeof(char), 100, fp);   /* ফাইল থেকে পরবে */

    puts(nbuffer); /* আউটপুট দিবে */

    fclose (fp); /* ফাইলটি বন্ধ করবে */

    return 0;
}
