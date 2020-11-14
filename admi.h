#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct admi {
   int uniq_id;
   char Name[50],dob[50],Gender[50],Religion[50],Nationality[50],Address[100],City[50], State[50], Father_Name[50],Father_Occupation[50],Mother_Name[50],Mother_Occupation[50], father_income[50],mother_income[50];
   char Name_b[50],Name_school[50],school_s[50],maxmarks[50],marksob[50],perc[50],yop[50],Name_b1[50],Name_school1[50],school_s1[50],maxmarks1[50],marksob1[50],perc1[50],yop1[50], mig[50],tc[50];
   }form;
FILE *student_detail;
FILE *student_id;
void admission_form();
void course_list();
void search_student();

