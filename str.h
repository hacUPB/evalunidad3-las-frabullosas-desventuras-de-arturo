#ifndef str_H_
#define str_H_

#include <stdint.h>

struct strVtb;

typedef struct {
    struct strVtb const *vptr;
    int tipo;
    char cadena[5];
}str;

struct strVtb
{
    char (*Organizar)(str const * const me);
    char (*print)(str const * const me);
};

void str_ctor(str * const me, int tipo, char ArrDat[5] );

static inline char Organizar_ArrDat(str const * const me)
{
    (*me->vptr->Organizar)(me);
}
static inline char print_ArrDat(str const * const me)
{
    (*me->vptr->print)(me);
}


#endif 