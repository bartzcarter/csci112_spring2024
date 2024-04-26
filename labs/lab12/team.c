#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "team.h"

void initialize_team(Team* team, int initial_capacity) {
    team->team = malloc(initial_capacity * sizeof(Person));
    if (team->team == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        exit(1);
    }
    team->size = 0;
    team->capacity = initial_capacity;
}

Person* create_new_person(char* name) {
    Person* new_person = malloc(sizeof(Person));
    if (new_person != NULL) {
        strncpy(new_person->name, name, sizeof(new_person->name) - 1);
        new_person->name[sizeof(new_person->name) - 1] = '\0'; // Ensure null-terminated
    }
    return new_person;
}

void insert_person_at_back(Team* team, Person* person) {
    if (team->size < team->capacity) {
        team->team[team->size] = *person;
        team->size++;
    } else {
        // Need to make more room for team members
        int new_capacity = team->capacity * 2; // Double the capacity
        Person* new_team = realloc(team->team, new_capacity * sizeof(Person));
        if (new_team == NULL) {
            printf("Memory reallocation failed. Exiting.\n");
            exit(1);
        }
        team->team = new_team;
        team->capacity = new_capacity;
        team->team[team->size] = *person;
        team->size++;
    }
}

void delete_person_at_back(Team* team) {
    //if size is 0, realloc capacity to 1 and keep size as 0
    if (team->size == 0) {
        team->team = realloc(team->team, sizeof(Person));
        team->capacity = 1;
    } 
    //if size will be 1/2 capacity after delete set realloc capacity to = size
    else if (team->size - 1 == team->capacity / 2) {
        team->team = realloc(team->team, (team->size - 1) * sizeof(Person));
        team->capacity = team->size - 1;
        team->size--;
    }
    
    else {
        team->size--;
    }
}

void decommission_team(Team* team) {
    free(team->team);
    team->size = 0;
    team->capacity = 0;
}

void print_team(Team* t) {
    printf("[");
    for (int i = 0; i < t->size; i++) {
        // If last element, don't print comma
        if (i == t->size - 1) {
            printf("%s", t->team[i].name);
        } else {
            printf("%s, ", t->team[i].name);
        }
    }
    printf("]\n");
    printf("Capacity is %d and current size is %d\n", t->capacity, t->size);
}

