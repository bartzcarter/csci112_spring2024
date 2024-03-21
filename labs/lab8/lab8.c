#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[99];
    char seat[19];
    int pop;
} County;

void swap_counties(County *a, County *b) {
    County temp = *a;
    *a = *b;
    *b = temp;
}

// Insertion sort function
void sort_counties(County *counties, int elements_read) {
    for(int i = 0; i < elements_read - 1; i++) {
        for(int j = i + 1; j < elements_read; j++) {
            if(strcmp(counties[i].name, counties[j].name) > 0)
                swap_counties(&counties[i], &counties[j]);
        }
    }
}

County add_county(char *name, char *seat, int pop) {
    County c;
    strcpy(c.name, name);
    strcpy(c.seat, seat);
    c.pop = pop;
    return c;
}

int main() {
    // Array of County
    County counties[100];

    // Ptr to input file
    FILE *in;
    in = fopen("/public/labs/lab8/counties1.txt", "r");

    // Make sure files are not empty
    if(in == NULL) {
        printf("file error");
        return 1;
    }

    // Read each line and store as a County in an array of counties
    int elements_read = 0;
    char line[499];
    while(fgets(line, 499, in) != NULL) {
        char *name, *seat, *pop;

        // Tokenize line
        name = strtok(line, "|");
        seat = strtok(NULL, "|");

        // Skip irrelevant data
        strtok(NULL, "|");
        strtok(NULL, "|");
        pop = strtok(NULL, "|");

        // Convert pop to int using sscanf
        int population;
        sscanf(pop, "%d", &population);


        // Add County to the array counties
        counties[elements_read] = add_county(name, seat, population);
        elements_read++;
    }

    // Sort the counties based on County.name
    sort_counties(counties, elements_read);

    char choice;
    while(1) {
        // Menu for searching
        printf("~~~Welcome to the county database!\n"); 
        printf("~~~To search for a county by seat, press 1.\n"); 
        printf("~~~To search for counties within a population range, press 2.\n"); 
        printf("~~~To exit, press any other key.\n"); 
        scanf(" %c", &choice);
        if(choice == '1') {
            char search_seat[19];
            printf("Enter a county seat to search for: ");
            scanf("%s", search_seat);
            for(int i = 0; i < elements_read; i++) {
                if(strcmp(counties[i].seat, search_seat) == 0) {
                    printf("%s County has seat %s\n", counties[i].name, counties[i].seat);
                    break;
                }
            }
        } else if(choice == '2') {
            int upper, lower;
            printf("Enter an upper bound for the population (inclusive): ");
            scanf("%d", &upper);
            printf("Enter a lower bound for the population (inclusive): ");
            scanf("%d", &lower);
            printf("The counties with populations between %d and %d are:\n", upper, lower);
            for(int i = 0; i < elements_read; i++) {
                if(counties[i].pop <= upper && counties[i].pop >= lower) {
                    printf("%s County, pop. %d\n", counties[i].name, counties[i].pop);
                }
            }
        } else {
            break;
        }
    }

    fclose(in);

    return 0;
}

