#include<stdio.h>
#include<string.h>

int main ()
{
 typedef struct student{
 int roll;
 char course[100];
 char name[100];
 float cgpa;
 };
 struct student s1;
 strcpy(s1.name,"Chagan");
 s1.roll= 123;
 s1.cgpa= 9;

 struct student s2;
 strcpy(s2.name,"Magan");
 s2.roll=124;
 s2.cgpa=5;

 struct student s3;
 strcpy(s3.name,"Gagan");
 s3.roll=125;
 s3.cgpa=7;

 struct student s4;
 strcpy(s4.name,"kavan");
 s4.roll=126;
 s4.cgpa=8;

 struct student s5;
 strcpy(s5.name,"Ravan");
 s5.roll=127;
 s5.cgpa=10;

 struct student s6;
  strcpy(s6.name,"Mohan");
 s6.roll=128;
 s6.cgpa=7;

 struct student s7;
 strcpy(s7.name,"Tapan");
 s7.roll=129;
 s7.cgpa=7;

 struct student s8;
 strcpy(s8.name,"Pavan");
 s8.roll=130;
 s8.cgpa=7;

 struct student s9;
 strcpy(s9.name,"savan");
 s9.roll=131;
 s9.cgpa=7.8;

 struct student s10;
 strcpy(s10.name,"manan");
 s10.roll=132;
 s10.cgpa=8;

 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s1.name,s1.roll,s1.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s2.name,s2.roll,s2.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s3.name,s3.roll,s3.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s4.name,s4.roll,s4.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s5.name,s5.roll,s5.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s6.name,s6.roll,s6.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s7.name,s7.roll,s7.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s8.name,s8.roll,s8.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s9.name,s9.roll,s9.cgpa);
 printf("Student name is %s, student roll is %d,student cgpa is %f\n",s10.name,s10.roll,s10.cgpa);
 return 0;
}

