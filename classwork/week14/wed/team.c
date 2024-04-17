#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "team.h"

void insert_person_at_back(Team* t, Person* p) {
    if (t->head == NULL) {
        t->head = p;
    } else {
        Person* current = t->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = p;
    }
}
