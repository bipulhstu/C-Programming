#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, num;
    char first_line[10001];

    char second_line[2];
    char third_line[2];

    scanf("%d",&t);

    while(t--)
    {
        getchar();
        int count=0;
        scanf("%[^\n]s",first_line);

        scanf("%s",second_line);

        if(second_line[0]>='A' && second_line[0]<='Z')
        third_line[0]='a'+(second_line[0]-'A');
        else
            third_line[0]='A'+(second_line[0]-'a');

        for(i=0; i<strlen(first_line);i++){
            if(second_line[0]==first_line[i] || third_line[0]==first_line[i])
                count++;
        }
        if(count!=0)
        printf("Occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
        else
            printf("'%c' is not present\n",second_line[0]);
    }
    return 0;

}
