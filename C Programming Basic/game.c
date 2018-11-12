#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int a,b,c,result1,result2;
system("color 1a");
puts("\n\t\t\tWELCOME TO THE FRIENDsGUSSING GAME\n");
puts("\t\t\t!!!!Play Game & Surprise !!!!");
puts("\t\t|===============================================");
puts("\t\t===============================================|");
puts("**************************************************************\n");
puts("\t\t\t****INSTRUCTION****\n**1.Mone mone tomake 2 ti sonka dortehobe.\n**2.Tarpor sonka 2 tir Jogfol & Bioyogfol input dite hobe.\n");
puts("***********************************************************************\n");
puts("\n\t\t\t*****Start Game Enter 1 *****\n\n\t\t\t*****Exit Game Enter 2*****");
scanf("%d",&c);
if(c==2){
puts("\n\t\t\t\t**GOOD BYE**\n\n \t\t This Game is Created by Noor Md. Anik\n");
getch();
return 0;
}
else{
puts("\t\t****** YOUR GAME IS START NOW ********");
puts("\t===========================================================\n");
printf("\n\n\tFriend, Tomi mone mone 2 ti sonka doro & sonka 2 tir jogfol typekoro\n\n");
scanf("%d",&a);
printf("\n\tAkon sonka 2 tir bioyogfol type koro & Enter dao\n\n");
scanf("%d",&b);
result1=(a+b)/2;
result2=(a-b)/2;
puts("===============================================================================");
printf("\n\n\t **** Tomar mone mone dora 1st sonkati = %d****\n\n ",result1);
printf("\n\n\t **** Tomar mone mone dora 2nd sonkati = %d****\n\n",result2);
puts("\n\n\t ***** THANKS FOR PLAY THE GAME ******\n\n \tThis Game is Created by Noor Md. Anik\n\n");
}
getch();
return 0;
}
