#include "STD.h"
#include <stdio.h>
#include "SDB.h"
#include "SDBAPP.h"

static u8 choice;

void SDB_APP(){

while (1){

printf(" \n 1. To add entry, enter 1\n 2. To get used size in database, enter 2\n 3. To read student data, enter 3\n 4. To get the list of all student IDs, enter 4\n 5. To check is ID is existed, enter 5\n 6. To delete student data, enter 6\n 7. To check is database is full, enter 7\n 8. To exit enter 0\n");
 scanf(" %d",&choice);
SDB_action(choice);

}
}

void SDB_action(u8 choice){
    u32 id;
    u8 function_exec=0;
switch (choice){
case 1:
    function_exec=SDB_AddEntry();
    printf("\n%d",function_exec );
    break;
case 2:
    function_exec=SDB_getusedSize();
    printf("\n%d",function_exec );
    break;
case 3:
     printf("Please enter the ID you want to see:");
     scanf(" %d",&id);
    function_exec=SDB_ReadEntry(id);
    printf("\n%d",function_exec );
    break;
case 4:
SDB_GetList();
    break;
case 5:
 printf("Please enter the ID you want to find: ");
     scanf(" %d",&id);
    function_exec=SDB_IsIdExist(id);
    printf("\n%d",function_exec );
    break;
case 6:
    printf("Please enter the ID you want to remove:");
     scanf("%d", &id);
    function_exec=SDB_DeletEntry(id);
    printf("\n%d",function_exec );
    break;

case 7:
    if(function_exec=SDB_isFull()){
        printf("FULL\n");

    }
    else
    {
        printf("NOT FULL\n");
    }
break;
case 8:
    printf("thanks for ur time ^-^");
    exit(0);
break;
default:
    printf("Please enter from the choices given to you!!!");
    break;
}
}
