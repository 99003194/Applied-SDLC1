#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void admission_form();
void course_list();
void search_student();
void main()
{
   int choice;
   for(;;)
   {
       printf("\n\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+\n");
            printf("+ \t\t     MENU\t\t\t+\n+\t\t    WELOCME\t\t\t+\n");
            printf("+\t\t\t\t\t\t+\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++\n");
            printf("\n\nEnter Your Choice? \n\n");
       scanf("%d",&choice);
       switch(choice) {
       case 1: admission_form();
               break;
       case 2: course_list();
               break;
       case 3: search_student();
               break;
       case 4: return;

       default:break;
       }
    }
  }



