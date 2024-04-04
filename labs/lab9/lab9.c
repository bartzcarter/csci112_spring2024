#include <stdio.h>
#include <string.h>
#include "county.h"
#include "sort.h"
#include "utils.h"


int main(void) {
    FILE *inp = fopen("/public/labs/lab8/counties1.txt", "r");
    FILE *outp = fopen("outdata_strings.txt", "w");
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int n = 0;
    char* input_status;

    if (inp == NULL) {
        printf("failed to open file\n");
        return(1);
    }

    do {
        input_status = fgets(lines[n++], MAX_LINE_LENGTH, inp);
    } while(input_status != NULL);
    n--;

    sort(lines, n);

    County counties[n];
    char *county, *population, *seat;
    int pop_int;
    for (int i = 0; i < n; i++) {
            county = strtok(lines[i], "|");
            seat = strtok(NULL, "|");
            strtok(NULL, "|"); // date
            strtok(NULL, "|"); // etymology
            population = strtok(NULL, "|");
            sscanf(population, "%d", &pop_int);
            counties[i] = add_county(county, seat, pop_int);
        }

        printf("~~~Welcome to the county database!\n");
        menu();
        int choice;
        while (scanf("%d", &choice ) && (choice == 1 || choice == 2)) {
            if (choice == 1) {
                find_seat(counties, n);
            }
            if (choice == 2) {
                find_range(counties, n);
            }
            menu();
        }

        fclose(inp);
        fclose(outp);
        return 0;
}
