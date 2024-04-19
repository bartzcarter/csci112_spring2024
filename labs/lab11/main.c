#include <stdio.h>
#include <string.h>
#include "team.h"

int main(void) {
    Team team;
    int n;
    char name[20];
    team.head = NULL;

    printf("How many people are on the team? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  Enter person's name > ");
        scanf("%s", name);
        insert_person_at_front(&team, create_new_person(name));
    }
    printf("\nCurrent team:\n");
    print_team(&team);
    printf("\n");
    printf("How many team members would you like to delete? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        delete_person_at_front(&team);
    }
    printf("\nCurrent team:\n");
    print_team(&team);
    printf("\n");

    printf("How many team members would you like to add? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  Enter person's name > ");
        scanf("%s", name);
        insert_person_at_front(&team, create_new_person(name));
    }

    printf("\nCurrent team:\n");
    print_team(&team);
    printf("\n");

    // delete all
    while (!is_empty(team)) {
        delete_person_at_front(&team);
    }
    return(0);
}
