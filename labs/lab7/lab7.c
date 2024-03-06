#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Insertion sort function
void sortStrings(char strings[][499], int elements_read) {
    int i, j;
    char temp[499];
    for(i = 1; i < elements_read; i++) {
        j = i;
        while(j > 0 && strcmp(strings[j], strings[j-1]) < 0) {
            strcpy(temp, strings[j]);
            strcpy(strings[j], strings[j-1]);
            strcpy(strings[j-1], temp);
            j--;
        }
    }
}

int main() {
    // Array of strings
    char strings[100][499];
    // Ptr to input and output files
    FILE *in;
    FILE *out;
    in = fopen("/public/labs/lab7/counties1.txt", "r");
    out = fopen("outdata_strings.txt", "w");

    // Make sure files are not empty
    if(in == NULL || out == NULL) {
        printf("file error");
        return 1;
    }

    // Read each line and store as a string in an array of strings using fgets()
    int elements_read = 0;
    while(fgets(strings[elements_read], 499, in) != NULL) {
        elements_read++;
    }

    // Sort the strings
    sortStrings(strings, elements_read);

    // Write the sorted strings to the output file
    for(int i = 0; i < elements_read; i++) {
        char line[499]; // Change here to use line directly
        strcpy(line, strings[i]); // Copy the sorted string
        char *county, *seat, *population;

        // Tokenize the line
        county = strtok(line, "|");
        seat = strtok(NULL, "|");

        // Skip irrelevant data
        strtok(NULL, "|");
        strtok(NULL, "|");

        population = strtok(NULL, "|");

        fprintf(out, "%s has population %s and seat %s\n", county, population, seat);
    }

    fclose(in);
    fclose(out);

    return 0;
}

