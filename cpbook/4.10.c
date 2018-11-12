#include <stdio.h>  
 int main()   
 {  
     int n, i;
     scanf("%d %d", &n, &i); 
     for(n; n <= 20; n = n + 1) {  
         for(i; i <= 10; i = i + 1) {  
             printf("%d X %d = %d\n", n, i, n*i);  
         }      
     }  
     return 0;  
 }  