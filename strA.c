#include "strA.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static char strA_Organizar_ArrDat (str const * const me,  char ArrDat[5]);
static char strA_print_ArrDat (str const * const me, char ArrDat[5]);

void strA_ctor(strA * const me, int type, char ArrDat[5])
{
    static struct strVtb const vtb = {
        &strA_Organizar_ArrDat,
        &strA_print_ArrDat
    };
    str_ctor(&me->UnaC, 1, ArrDat);
    me->UnaC.vptr = &vtb;
}

char strA_print_ArrDat(str const * const me, char ArrDat[5])
{
    char chain = strA_Organizar_ArrDat(me, ArrDat);
    printf("%s", chain);
}

char strA_Organizar_ArrDat(str const * const me, char ArrDat[5])
{
    char chainorganizada = ArrDat[0] + ',' + ArrDat[1] + ',' + ArrDat[2] + ',' + ArrDat[3] + ',' + ArrDat[4];
    return chainorganizada;    
}
