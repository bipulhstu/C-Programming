#include<stdio.h>
int main()
{
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);

    int i , vowel, consonant, digit, word, other;
    i = vowel = consonant = digit = word = other = 0;

    while((ch = str[i]) != '\0')
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch >= '0' && ch<= '9')
            digit++;
        else if(ch == ' ')
            word++;
        else
            other++;
        i++;
    }
    word++;

    printf("Number of vowels = %d\n",vowel);
    printf("Number of consonants = %d\n",consonant);
    printf("Number of digits = %d\n",digit);
    printf("Number of words = %d\n",word);
    printf("Others = %d\n",other);
}
