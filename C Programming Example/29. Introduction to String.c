#include<stdio.h>
int main()
{
    char s1[7];
    s1[0] = 'B';
    s1[1] = 'i';
    s1[2] = 'p';
    s1[3] = 'u';
    s1[4] = 'l';
    s1[5] = '\0';
    printf("s1 = %s\n",s1);

    char s2[6]={'B', 'i', 'p', 'u', 'l'};
    printf("s2 = %s\n",s2);

    char s3[] = "Bipul Islam";
    printf("s3 = %s\n",s3);

    char s4[100];
    printf("Enter your name : ");
    scanf("%s",&s4);
    printf("s4 = %s\n",s4);

    char s5[100];
    printf("Enter your name : ");
    gets(s5);
    printf("s5 = %s\n", s5);

}
