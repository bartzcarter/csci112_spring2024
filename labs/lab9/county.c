#include "county.h"
#include <string.h>

County add_county(char* name, char* seat, int pop) {
        County c;
        strcpy(c.name, name);
        strcpy(c.seat, seat);
        c.pop = pop;
        return c;
}
