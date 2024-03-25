#include <stdio.h>
#include "coordinates.h"
#include "location.h"


int main() {
    Location mor;

    mor.lat.degrees = 45;
    mor.lat.min = 6;
    mor.lat.dir = 'N';

    mor.lon.degrees = 111;
    mor.lon.min = 4;
    mor.lon.dir = 'W';

    printf("Museum of the Rockies location is LAT: %d %d %c, LON: %d %d %c\n",
               mor.lat.degrees, mor.lat.min, mor.lat.dir,
               mor.lon.degrees, mor.lon.min, mor.lon.dir);
    return(0);
}


