#include "str.h"
#ifndef strA_H_
#define strA_H_

typedef struct
{
    str UnaC;
} strA;

void strA_ctor(strA * const me, int type, char ArrDat[5]);

#endif
