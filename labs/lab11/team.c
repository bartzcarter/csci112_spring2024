// team.c

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "team.h"

Person *create_new_person(char *name) {
    Person *p = malloc(sizeof(Person));
    strcpy(p->name, name); 
    p->next = NULL;
    return p;
}

void insert_person_at_front(Team *t, Person *p) {
    p->next = t->head;
    t->head = p;
    return;
}

void print_team(Team *t) {
    Person *current = t->head;
    while(current != NULL) {
        printf("%s->", current->name);
        current = current->next;
    }
    return;
}

void delete_person_at_front(Team *t) {
    if (t->head != NULL) {
        Person *temp = t->head;
        t->head = t->head->next;
        free(temp);
    }
}

int is_empty(Team t) {
    if(t.head == NULL) {
        return 1;
    }
    return 0;
}

