#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct
{
    int roll_no;
    char firstname[20];
    char lastname[20];
    int mark;
}student;

int main()
{
   int flag,choice,shift,rollnumber,found,continu,length;
   char studentname[20];
   FILE *fp;

    printf("\n\tC PROGRAM OF STUDENT DATABASE SYSTEM");
   Label1:
      printf("\n1 -> Store a new record in database\n");
      printf("2 -> Search a student record by Student First Name\n");
      printf("3 -> Search a student record by rollNo\n");
      printf("4 -> Quit Student Database");
      printf("\n\n");
      printf("Enter your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
       case  1:
       Label2:
       printf("\nEnter Student Details:\n\nRoll number (Integer): ");
       scanf("%d",&student.roll_no);
       printf("\nName:");
       scanf("%s",student.firstname);
       printf("\nSurname:");
       scanf("%s",student.lastname);
       printf("\nMark(0 - 100 integer) : ");
       scanf("%d",&student.mark);
       fp=fopen("studentfile.txt","a+");
       fprintf(fp,"\n%d\t%s\t%s\t%d\t",student.roll_no,student.firstname,student.lastname,student.mark);
       fclose(fp);
       printf("A student record has been added successfully...\n");
       printf("\n\n1 -> Wish to add another record to database");
       printf("\n2 -> Wish to move to Main Menu");
       printf("\n3 -> Exit from Program\n");
       scanf("%d",&shift);
       if(shift==1)
        goto Label2;
       if(shift==2)
        goto Label1;
       if(shift==3)
        break;
       if(shift!=1&&2&&3){
        printf("Exiting.........");
        break;
        }

       case 2:
       Label4:
       printf("\nEnter student first name: ");
       scanf("%s",&studentname);
       printf("Searching record with studentname=%s.\n",studentname);
           found=0;
           if((fp=fopen("studentfile.txt","r"))==NULL)
        {
            printf(" ! The File is Empty...\n\n");
        }
        else
        {
            while(!feof(fp)&& found==0)
                {
                fscanf(fp,"\n%d\t%s\t%s\t%d\t",&student.roll_no,student.firstname,student.lastname,&student.mark);
                length = strlen(student.firstname);
                if(student.firstname[length]==studentname[length])
                    found=1;
            }
            }
       if(found)
       {
         printf("\nThe record is found.");
         printf("\nRoll no: %d\nName: %s\nSurname: %s\nMark: %d \n",student.roll_no,student.firstname,student.lastname,student.mark);
       }
       else
       {
         printf("Not found...\n");
         getch();
       }
       Label5:
       printf("\n\n1 -> Wish to search another record");
       printf("\n2 -> Wish to move to Main Menu");
       printf("\n3 -> Exit from Program\n");
       scanf("%d",&shift);
       if(shift==1)
        goto Label4;
       if(shift==2)
        goto Label1;
       if(shift==3)
        break;
       if(shift!=1&&2&&3){
        printf("\nEnter a valid choice");
        goto Label5;
        }
       case 3:
       Label6:
       printf("\nEnter the rollnumber: ");
       scanf("%d",&rollnumber);
       printf("Searching record with rollnumber=%d.\n",rollnumber);
           found=0;
           if((fp=fopen("studentfile.txt","r"))==NULL)
        {
            printf(" ! The File is Empty...\n\n");
        }
        else
        {
            while(!feof(fp)&& found==0)
                {
                fscanf(fp,"\n%d\t%s\t%s\t%d\t",&student.roll_no,student.firstname,student.lastname,&student.mark);
                if(student.roll_no==rollnumber)
                    found=1;
            }
            }
       if(found)
       {
         printf("\nThe record is found.");
         printf("\nRoll no: %d\nName: %s\nSurname: %s\nMark: %d \n",student.roll_no,student.firstname,student.lastname,student.mark);
       }
       else
       {
         printf("Not found...\n");
         getch();
       }
       Label7:
       printf("\n\n1 -> Wish to search more..");
       printf("\n2 -> Wish to move to Main Menu");
       printf("\n3 -> Exit from Program\n");
       scanf("%d",&shift);
       if(shift==1)
        goto Label6;
       if(shift==2)
        goto Label1;
       if(shift==3)
        break;
       if(shift!=1&&2&&3){
        printf("\nEnter a valid choice");
        goto Label7;
        }
       case 4: break;
       default :
          printf(" Bad choice...Enter the choice again...\n");
          goto Label1;
        }


      return 0;
}



