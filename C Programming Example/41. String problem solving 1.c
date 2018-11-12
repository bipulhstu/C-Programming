///Input 5 districts name of Bd and sorted them
#include<stdio.h>
#include<string.h>
int main()
{
    char city[5][20] = {"Rangpur", "Dhaka", "Barisal", "Rajshahi", "Sylhet"};
    int i, j;
    char temp[30];
    printf("Before Sorting: \n\n");
    for(i = 0; i<5; i++)
        printf("%s\n",city[i]);

    ///sorting process
    for(i = 0; i<5; i++)
    {
        for(j=i+1; j< 5; j++)
        {
            if(strcmp(city[i],city[j])>0)
            {
                strcpy(temp, city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j], temp);
            }
        }
    }
    printf("After Sorting: \n\n");
    for(i = 0; i<5; i++)
        printf("%s\n",city[i]);

    return 0;
}
