#ifndef strB_H_
#define strB_H_

#include "str.h"
typedef struct 
{
    str_t str;
    
}strB_t;

void str_ctor(strB_t);

void str_dtor(strB_t);
#endif