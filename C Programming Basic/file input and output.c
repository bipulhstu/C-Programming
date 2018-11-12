#include<stdio.h>
int main()
{
    FILE *output_file;
    //input_file = fopen("bipul.txt", "r");
    output_file = fopen("bipul.txt", "w");
    char input[80];
    gets(input);
    //fgets(input, 80, input_file);
    fputs(input, output_file);
}
