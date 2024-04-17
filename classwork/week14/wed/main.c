#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "team.h"

int main(void) {
    Team team;
    int n;
    char name[20];
    team.head = NULL;

    n = 2;
    for (int i = 0; i < n; i++) {
        printf("  Enter person's name > ");
        scanf("%s", name);
        Person* new_person = malloc(sizeof(Person));
        strcpy(new_person->name, name);
        new_person->next = NULL;
        insert_person_at_back(&team, new_person);
    }
    printf("\nCurrent team:\n");
    printf("%s->%s->\n", team.head->name, team.head->next->name);
    printf("\n");
    return(0);
}
