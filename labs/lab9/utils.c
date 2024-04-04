#include "utils.h"

#include <stdio.h>
#include <string.h>

void menu() {
    printf("~~~To search for a county by seat, press 1.\n~~~To search for counties within a population range, press 2.\n~~~To exit, press any other key.\n");
}

void find_seat(County counties[], int n) {
    char input_seat[20];
    // find county with seat name
    printf("Enter a county seat to search for: ");
    scanf("%s", input_seat);
    for (int i = 0; i < n; i++) {
        if (strcmp(input_seat, counties[i].seat) == 0) {
            printf("%s has seat %s\n", counties[i].name,
                                    counties[i].seat);
        }
    }
}

void find_range(County counties[], int n) {
    int ub, lb;
    printf("Enter an upper bound for the population (inclusive): ");
    scanf("%d", &ub);
    printf("Enter a lower bound for the population (inclusive): ");
    scanf("%d", &lb);
    printf("The counties with populations between %d and %d are:\n", ub, lb);
    for (int i = 0; i < n; i++) {
        if (counties[i].pop >= lb && counties[i].pop <= ub) {
            printf("%s, pop. %d\n", counties[i].name, counties[i].pop);
        }
    }
}
