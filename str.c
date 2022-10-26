#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "str.h"
#include <assert.h>

static char Organizar_ArrDat(str const * const me);
static char print_ArrDat(str const * const me);

void str_ctor(str * const me, int type, char ArrDat[5])
{
    static struct strVtb const vtb1 = 
    {
        &Organizar_ArrDat,
        &print_ArrDat
    };
    me->vptr = &vtb1;
    me->tipo = type;
    for(int i = 0; i<5; i++)
    {
        me->cadena[i] = ArrDat[i]; 
    }
}

static char print_ArrDat(str const * const me)
{
    assert(0);
    return 0U;
}

static char Organizar_ArrDat(str const * const me)
{
    assert(0);
    return 0U;
}