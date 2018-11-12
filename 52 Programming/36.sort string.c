#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char name[10000][8], temp[8];
    int i, j, n;
    scanf("%d",&t);
    while(t--){


    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

        for(i=0; i<n; i++)
            printf("%s\n",name[i]);
    }

    return 0;
}
