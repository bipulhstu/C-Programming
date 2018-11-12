#include <stdio.h>
int main()
{
    int i, j;
    int array1[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int array2[10];
    for(i=0, j=9; i<10; i++, j--){
        array2[j]=array1[i];
    }
    for(i=0; i<10; i++){
        array1[i]=array2[i];
    }
    for(i=0; i<10; i++)
    printf("%dth element is:%d\n", i+1, array1[i]);
    return 0;
}
