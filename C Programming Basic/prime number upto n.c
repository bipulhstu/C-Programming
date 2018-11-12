#include<stdio.h>
#include<conio.h>

int main(){

    int N, i, j, isPrime, n;

    printf("To print all prime numbers between 1 to N\n");
    printf("Enter the value of N\n");
    scanf("%d",&N);

    /* For every number between 2 to N, check
    whether it is prime number or not */
    printf("Prime numbers between %d to %d\n", 1, N);

    for(i = 2; i <= N; i++){
        isPrime = 0;
        /* Check whether i is prime or not */
        for(j = 2; j <= i/2; j++){
             /* Check If any number between 2 to i/2 divides I
              completely If yes the i cannot be prime number */
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }

        if(isPrime==0 && N!= 1)
            printf("%d ",i);
    }
   getch();
   return 0;
}
