#ifndef _SDB_H_INCLUDED
#define _SDB_H_INCLUDED
#include "STD.h"
#include <stdlib.h>
#include <stdio.h>
bool SDB_isFull();
u8 SDB_getusedSize();
bool SDB_AddEntry();
bool SDB_DeletEntry (u32 id);
bool SDB_ReadEntry (u32 id);
void SDB_GetList ();
bool SDB_IsIdExist (u32 id);




typedef struct SimpleDb
{
    u32 Student_ID;
    u32 Student_year;
    u32 Course1_ID;
    u32 Course1_grade;
    u32 Course2_ID;
    u32 Course2_grade;
    u32 Course3_ID;
    u32 Course3_grade;
    struct SimpleDb  *Next_address;

}student;

#endif
