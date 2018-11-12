

#include<stdio.h>
#define line 3
void main()
{
    char small[]="****";
    char large[]="*****************";
    char space1[]="       ";
    char space2[]="                    ";
    int i, j, k, l;
    for(i=1; i<=5; i++)
    {
        if(i%2!=0)
        {
            for(j=0; j<line; j++)
            {
                printf("%s%s%s%s%s\n",large,space1,large,space1,large);
            }
        }
        else
        {
            if(i%2==0)
            {
                for(k=0; k<line; k++)
                {
                    printf("%s%s%s%s%s\n",small,space2,small,space2,small);

                }
            }

        }
    }
}
