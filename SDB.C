#include "SDB.h"
#include "STD.h"
#include <stdio.h>


#define MAX  9
#define MIN  3

static s8 student_counter=-1;//counter being -1 means its empty and it counts from 0->9
static student *HEADING = NULL; // heading starts with null to set up
static student *TEMP;
static bool ERROR_CHECK;

bool SDB_AddEntry()
{
    ERROR_CHECK==NOK;
if(student_counter<MAX){


        student_counter++;
        student * next_student =(student*)malloc(sizeof(student));
        next_student->Next_address=NULL;

    if(student_counter==0){
    HEADING=next_student;
}
else{
        TEMP=HEADING;
    while(TEMP->Next_address!=NULL){
        TEMP=TEMP->Next_address;
    }
    TEMP->Next_address=next_student;
}


    printf("\n please enter Student's:\n");
printf("Student ID:\n");
scanf("%d",&next_student->Student_ID);
TEMP=HEADING;
while(TEMP->Next_address!=NULL)
{
    if(TEMP->Student_ID==next_student->Student_ID){
        printf("ERROR ALREADY USED ID\n please enter another Student ID:\n");
scanf("%d",&next_student->Student_ID);
TEMP=HEADING;
    }
    else{
        TEMP=TEMP->Next_address;
    }
}


printf("Student year:\n");
scanf("%d",&next_student->Student_year);
printf("Student course 1:\n");
scanf("%d",&next_student->Course1_ID);
printf("Student course 1 grade:\n");
scanf("%d",&next_student->Course1_grade);
printf("Student course 2:\n");
scanf("%d",&next_student->Course2_ID);
printf("Student course 2 grade:\n");
scanf("%d",&next_student->Course2_grade);
printf("Student course 3:\n");
scanf("%d",&next_student->Course3_ID);
printf("Student course 3 grade:\n");
scanf("%d",&next_student->Course3_grade);
ERROR_CHECK=OK;
}
else{
    printf("invalid number of students");
}
return ERROR_CHECK;
}

bool SDB_isFull(){
if(student_counter==MAX)
{
    return OK;
}
else
{
    return NOK;
}
}


u8 SDB_getusedSize(){
return student_counter+1;
}


bool SDB_DeletEntry (u32 id){
    ERROR_CHECK=NOK;
    if(student_counter<MIN){
            printf("NUMBER OF STUDENTS WILL BE LESS THAN 3");
        return ERROR_CHECK;
    }
student * PREV_TEMP=HEADING;
TEMP=HEADING;
while(PREV_TEMP!=NULL)
{
    if(TEMP->Student_ID==id)
    {
     PREV_TEMP->Next_address=TEMP->Next_address;
      if(TEMP==HEADING){
         HEADING=PREV_TEMP->Next_address;
        }

            free(TEMP);
        printf("ID FOUND AND DELETED");
        ERROR_CHECK=OK;
        student_counter--;
       return ERROR_CHECK;
    }
    else{
        PREV_TEMP=TEMP;
        TEMP=TEMP->Next_address;
    }

}
 printf("ID WAS NOT FOUND");
    return ERROR_CHECK;




}



bool SDB_ReadEntry (u32 id){
ERROR_CHECK=NOK;
TEMP=HEADING;
while(TEMP!=NULL)
{
    if(TEMP->Student_ID==id){
        printf("ID WAS FOUND\n");
        printf("Student Year:%d \n",TEMP->Student_year);
        printf("Course 1:%d \n",TEMP->Course1_ID);
        printf("Course 1 grade:%d \n",TEMP->Course1_grade);
        printf("Course 2:%d \n",TEMP->Course2_ID);
        printf("Course 2 grade:%d \n",TEMP->Course2_grade);
        printf("Course 3:%d \n",TEMP->Course3_ID);
        printf("Course 3 grade:%d \n",TEMP->Course3_grade);
        ERROR_CHECK=OK;
       return ERROR_CHECK;
    }
    else{
        TEMP=TEMP->Next_address;
    }
}
printf("ID WAS NOT FOUND");
return ERROR_CHECK;
}


bool SDB_IsIdExist (u32 id){
ERROR_CHECK=NOK;
TEMP=HEADING;
while(TEMP!=NULL)
{
    if(TEMP->Student_ID==id){
        printf("ID WAS FOUND\n");
        ERROR_CHECK=OK;
       return ERROR_CHECK;
    }
    else{
        TEMP=TEMP->Next_address;
    }
}
printf("ID WAS NOT FOUND");
return ERROR_CHECK;
}
void SDB_GetList (){
printf("there are %d of ids\n",student_counter+1);
TEMP=HEADING;
for(int i=0;i<=student_counter;i++){
    printf("id %d : %d \n",i+1,TEMP->Student_ID);
    TEMP=TEMP->Next_address;
}
}
