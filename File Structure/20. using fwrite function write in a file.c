#include <stdio.h>

int main ()
{
    FILE * fp; /* file object এর পয়েন্টার */

    char buffer[] = { 's', 'h', 'a', 'h', 'e', 'e', 'n' };       /* এই array টা ফাইল এর মধ্যে রাখবো */

    fp = fopen ("myfile.txt", "w"); /* লেখার জন্য ফাইল open করবে  */

    fwrite (buffer, sizeof(char), sizeof(buffer), fp);  /* ফাইল এর মধ্যে লিখবে */

    fclose (fp); /* ফাইলটি বন্ধ করবে */

    return 0;
}

