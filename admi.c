#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *student_detail;
FILE *student_id;
struct admi {
   int uniq_id;
   char Name[50],dob[50],Gender[50],Religion[50],Nationality[50],Address[100],City[50], State[50], Father_Name[50],Father_Occupation[50],Mother_Name[50],Mother_Occupation[50], father_income[50],mother_income[50];
   char Name_b[50],Name_school[50],school_s[50],maxmarks[50],marksob[50],perc[50],yop[50],Name_b1[50],Name_school1[50],school_s1[50],maxmarks1[50],marksob1[50],perc1[50],yop1[50], mig[50],tc[50];
   }form;
void admission_form()
{
   int check_id;
   student_detail = fopen("student_details.txt","a+");
   student_id = fopen("student_id.txt","a+");
   printf(" \t \t STUDENT ADMISSION FORM \n");
   printf("\n1.Personal Details \n \n \n");
   printf("Enter Your Unique Id\n");
   scanf("%d",&form.uniq_id);
   while(!feof(student_id)) {
       fscanf(student_id,"%d",&check_id);
       if(form.uniq_id==check_id) {
           printf("\nSorry this ID has been taken please select a different ID\n");
           return;
       }
   }
   printf("Enter Your Name \n \n");
   scanf("%s",form.Name);
   printf("Enter the DOB in DD/MM/YY format \n \n");
   scanf("%s",form.dob);
   printf("Enter Your Gender : \n \n");
   scanf("%s",form.Gender);
   printf("Enter Your Religion \n \n");
   scanf("%s",form.Religion);
   printf("Enter Your Nationality \n \n");
   scanf("%s",form.Nationality);
   printf("Enter Your Permanent Address \n \n");
   scanf("%s",form.Address);
   printf("Enter Your City:\n \n");
   scanf("%s",form.City);
   printf("Enter Your Father's Name: \n \n");
   scanf("%s",form.Father_Name);
   printf("Enter Your Father's Occupation \n \n");
   scanf("%s",form.Father_Occupation);
   printf("Enter Your Mother's Name:  \n \n");
   scanf("%s",form.Mother_Name);
   printf("Enter Your Mother's Occupation \n \n");
   scanf("%s",form.Mother_Occupation);
   printf("Enter Your Father's Income: \n \n");
   scanf("%s",form.father_income);
   printf("Enter Your Mother's Income: \n \n");
   scanf("%s",form.mother_income);
   printf("\n2.Academic Details \n \n \n");
   printf(" \t Class 10th  \n\n");
   printf("%s\n%s\n%s\n","Name of Board","Name of School","State");
   printf("\n\n");
   scanf("%s",form.Name_b);
   scanf("%s",form.Name_school);
   scanf("%s",form.school_s);
   printf("\n\n%s\n%s\n%s\n%s\n","Max Marks","Marks Obtained","Percentage","year of passing");
   printf("\n\n");
   scanf("%s",form.maxmarks);
   scanf("%s",form.marksob);
   scanf("%s",form.perc);
   scanf("%s",form.yop);
   printf(" \t Class 12th  \n\n");
   printf("%s\n%s\n%s\n","Name of Board","Name of School","State");
   printf("\n\n");
   scanf("%s",form.Name_b1);
   scanf("%s",form.Name_school1);
   scanf("%s",form.school_s1);
   printf("\n\n%s\n%s\n%s\n%s \n","Max Marks","Marks Obtained","Percentage","year of passing");
   printf("\n\n");
   scanf("%s",form.maxmarks1);
   scanf("%s",form.marksob1);
   scanf("%s",form.perc1);
   scanf("%s",form.yop1);
   printf("Enter If you Have a Migration Certificate or not? \n");
   scanf("%s",form.mig);
   printf("Enter If you Have a Transfer Certificate or not \n");
   scanf("%s",form.tc);
   fprintf(student_id,"\n%d",form.uniq_id);
   fclose(student_id);
   fprintf(student_detail,"\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",form.Name,form.dob,form.Gender,form.Religion,form.Nationality,form.Address,form.City,form.Father_Name,form.Father_Occupation,form.Mother_Name,form.Mother_Occupation,form.father_income,form.mother_income,form.Name_b,form.Name_school,form.school_s,form.maxmarks,form.marksob,form.perc,form.yop,form.Name_b1,form.Name_school1,form.school_s1,form.maxmarks1,form.marksob1,form.perc1,form.yop1,form.mig,form.tc);
   fclose(student_detail);
   printf("\n\nThankyou For Submitting the Admission form!\n\n");
}
void course_list() {
int Target;
int Found=0;
if ((student_id=fopen("student_id.txt","r"))==NULL){
       printf(" There is no student data present.\n\n");
   } else {
       printf("\nEnter The ID Of Student : ");
       scanf("%d",&Target);
       while(!feof(student_id)&& Found==0) {
           fscanf(student_id,"%d",&form.uniq_id);
           if(Target==form.uniq_id) {
               Found=1;
           }
       }
      if(Found) {
           printf("\n\nCourse List\n\n\n");
           printf("Please Select Your Branch\n\n");
           printf("1.Computer Science And Engineering\n");
           printf("2.Information Science\n");
           printf("3.Mechanical Engineering\n");
           printf("4.Civil Engineering\n");
           printf("5.Aeronautical Engineering\n");
           printf("6.Electrical And Electronics Engineering\n");
           printf("7.Electrical And Communication Engineering\n");
       }
       if(!Found) {
           printf(" ! There is no student entry with the entered student ID\n");
       }
       fclose(student_id);
       return;
       }
   }
void search_student()
{
   int ID;
   int Found=0;
   if((student_id=fopen("student_id.txt","r"))==NULL) {
       printf(" ! The File is Empty...\n\n");
   } else {
       printf("\nEnter The ID of the student : ");
       scanf("%d",&ID);
       while(!feof(student_id)&& Found==0) {
          fscanf(student_id,"%d",&form.uniq_id);
           if(ID==form.uniq_id) {

               Found=1;
           }
       }
       if(Found) {
           printf("\nUnique ID:%d\n \n  The Name of Student:%s\n \n The dob of student:%s\n \n Gender of the student:%s\n \n religion of the student:%s\n \n nationality of the student:%s\n \n Address :%s\n \n City :%s\n \n Father's Name:%s\n \n Father's Occupation:%s\n \n Mother's Name:%s\n \n Mother's Occupation:%s\n \n Father's Income:%s\n \n Mother's Income:%s\n \n Name of Board of Class 10th:%s\n \n Name of School of Class 10th:%s\n \n Name of School State of Class 10th:%s\n \n Max Marks:%s\n \n Marks Obtained:%s\n \nPercentage:%s\n \nYear of Passing:%s\n \nName of Board of Class 12th:%s\n \n Name of School of Class 12th:%s\n \n Name of School State of Class 12th:%s\n \n Max Marks:%s\n \n Marks Obtained:%s\n \nPercentage:%s\n \nYear of Passing:%s\n \nMigration Card:%s\n \nTransfer Certificate:%s\n\n",form.uniq_id,form.Name,form.dob,form.Gender,form.Religion,form.Nationality,form.Address,form.City,form.Father_Name,form.Father_Occupation,form.Mother_Name,form.Mother_Occupation,form.father_income,form.mother_income,form.Name_b,form.Name_school,form.school_s,form.maxmarks,form.marksob,form.perc,form.yop,form.Name_b1,form.Name_school1,form.school_s1,form.maxmarks1,form.marksob1,form.perc1,form.yop1,form.mig,form.tc);
       }
       else if(!Found) {
           printf("Not found\n");
       }
fclose(student_id);
   }
}

