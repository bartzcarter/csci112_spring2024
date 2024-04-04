#ifndef COUNTY_H
#define COUNTY_H

#include "def.h"

typedef struct {
    char name[MAX_LINE_LENGTH];
    char seat[MAX_LINE_LENGTH];
    int pop;
} County;

County add_county(char* name, char* seat, int pop);

#endif /* COUNTY_H */

