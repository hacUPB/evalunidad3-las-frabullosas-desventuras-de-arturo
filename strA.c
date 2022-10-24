#include "strA.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static char EstrategiaA_Organizar_Arreglo (Estrategia const * const me,  char arreglo[5]);
static char EstrategiaA_print_Arreglo (Estrategia const * const me, char arreglo[5]);

void EstrategiaA_ctor(EstrategiaA * const me, int type, char arreglo[5])
{
    static struct EstrategiaVtb const vtb = {
        &EstrategiaA_Organizar_Arreglo,
        &EstrategiaA_print_Arreglo
    };
    Estrategia_ctor(&me->superclase, 1, arreglo);
    me->superclase.vptr = &vtb;
}

char EstrategiaA_print_Arreglo(Estrategia const * const me, char arreglo[5])
{
    char cadena = EstrategiaA_Organizar_Arreglo(me, arreglo);
    printf("%s", cadena);
}

char EstrategiaA_Organizar_Arreglo(Estrategia const * const me, char arreglo[5])
{
    char cadenaorganizada = arreglo[0] + ',' + arreglo[1] + ',' + arreglo[2] + ',' + arreglo[3] + ',' + arreglo[4];
    return cadenaorganizada;    
}