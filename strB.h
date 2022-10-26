#ifndef strB_H_
#define strB_H_
#include "str.h"

typedef struct 
{
    str dosC;
}strB;

void strB_ctor(strA * const me, int type, char arreglo[5]);
#endif
