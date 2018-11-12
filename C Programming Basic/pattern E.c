
#include<stdio.h>
#define line 3
void main()
{
    char small[]="****";
    char large[]="*****************";
    char space[]="             ";
    int i, j, k, l;
    for(i=1; i<=5; i++)
    {
        if(i%2!=0)
        {
            for(j=0; j<line; j++)
            {
                printf("%s\n",large);
            }
        }
        else
        {
            if(i%2==0)
            {
                for(k=0; k<line; k++)
                {
                    printf("%s\n",small);

                }
            }

        }
    }
}
