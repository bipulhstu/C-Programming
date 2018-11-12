#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n, i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

