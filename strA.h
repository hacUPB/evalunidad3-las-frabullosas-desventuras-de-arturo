#ifndef strA_H_
#define strA_H_

#include "str.h"

typedef struct
{
    str superclase;
} EstrategiaA;

void strA_ctor(strA * const me, int type, char arreglo[5]);

#endif