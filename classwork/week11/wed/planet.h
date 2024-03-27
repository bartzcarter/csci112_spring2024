#ifndef PLANET_H
#define PLANET_H

#define STRSIZ 10

typedef struct {
    char name[STRSIZ];
    double diameter;
    int moons;
    double orbit_time,
            rotation_time;
} planet_t;

void print_planet(planet_t);
int planet_equal(planet_t, planet_t);
int scan_planet(planet_t*);
planet_t scan_planet2();

#endif
