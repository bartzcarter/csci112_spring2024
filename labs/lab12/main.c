#include <stdio.h>
#include <string.h>
#include "team.h"

int main(void) {
    Team team;
    int n;
    char name[20];


    printf("What capacity should the team be initialized with? > ");
    scanf("%d", &n);
    initialize_team(&team, n);

    

    printf("\nHow many people are on the team? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  Enter person's name > ");
        scanf("%s", name);
        insert_person_at_back(&team, create_new_person(name));
    }

    printf("\nCurrent team:\n");
    print_team(&team);
    printf("\n");

    printf("How many team members would you like to delete? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        delete_person_at_back(&team);
    }
    printf("\nCurrent team:\n");
    print_team(&team);
    printf("\n");

    printf("How many team members would you like to add? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  Enter person's name > ");
        scanf("%s", name);
        insert_person_at_back(&team, create_new_person(name));
    }

    printf("\nCurrent team:\n");
    print_team(&team);
    printf("\n");

    decommission_team(&team);
    

    return(0);
}
