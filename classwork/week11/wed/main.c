#include <stdio.h>
#include <string.h>
#include "planet.h"


int main() {
    planet_t p1 = {"Jupiter", 142800, 16, 11.9, 9.925};

    planet_t planets[10];
    planets[0] = p1;

    scan_planet(&planets[1]);
    planets[2] =  scan_planet2();

    printf("The planets are\n");
    for (int i = 0; i < 3; i++) {
       print_planet(planets[i]); 
    }




    return(0);
}
