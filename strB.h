#ifndef strB_H_
#define strB_H_
#include "str.h"

typedef struct 
{
    str dosC;
}strB;

void strB_ctor(strB * const me, int type, char ArrDat[5]);
#endif