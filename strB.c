#include "strB.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char strB_Organizar_ArrDat (str const * const me,  char ArrDat[5]);
static char strB_print_ArrDat (str const * const me, char ArrDat[5]);

void strB_ctor(strB * const me, int type, char ArrDat[5])
{
    static struct strVtb const vtb = {
        &strB_Organizar_ArrDat,
        &strB_print_ArrDat
    };
    str_ctor(&me->chain, 1, ArrDat);
    me->dosC.vptr = &vtb;
}

char strB_print_ArrDat(str const * const me, char ArrDat[5])
{
    char chain = strB_Organizar_ArrDat(me, ArrDat);
    printf("%s", chain);
}

char strB_Organizar_ArrDat(str const * const me, char ArrDat[5])
{
    char chainreves = ArrDat[0] + ',' + ArrDat[1] + ',' + ArrDat[2] + ',' + ArrDat[3] + ',' + ArrDat[4];
    return chainreves;    
}
