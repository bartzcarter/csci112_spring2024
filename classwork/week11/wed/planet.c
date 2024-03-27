#include <stdio.h>
#include <string.h>
#include "planet.h"

void print_planet(planet_t p) {
    printf("%s: %.0f diameter, %d moons, %.2f orbit time, %.2f rot. time\n",
        p.name, p.diameter, p.moons, p.orbit_time, p.rotation_time);
}

int planet_equal(planet_t p1, planet_t p2) {
    return (strcmp(p1.name, p2.name) == 0 &&
             p1.diameter == p2.diameter &&
             p1.moons == p2.moons &&
             p1.orbit_time == p2.orbit_time &&
             p1.rotation_time == p2.rotation_time);
}

int scan_planet(planet_t *p) {
    printf("Enter a planet name, diameter, num. moons, orbit time, and rotation time: ");
    scanf("%s%lf%d%lf%lf", p->name, &p->diameter,
        &p->moons, &p->orbit_time, &p->rotation_time);
    return 0;
}

planet_t scan_planet2() {
    printf("Enter a planet name, diameter, num. moons, orbit time, and rotation time: ");
    planet_t p;
    scanf("%s%lf%d%lf%lf", p.name, &p.diameter, &p.moons, &p.orbit_time, &p.rotation_time);
    return p;
}
