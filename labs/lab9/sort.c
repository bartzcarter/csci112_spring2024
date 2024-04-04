#include "sort.h"
#include <string.h>

int get_min_in_range(char lines[][MAX_LINE_LENGTH], int j, int n) {
    int min_index = j;
    for (int i = j; i < n; i++) {
        if (strcmp(lines[i], lines[min_index]) < 0)
            min_index = i;
    }
    return(min_index);
}

void sort(char lines[][MAX_LINE_LENGTH], int n) {
    int min_idx;
    char og_lines_i[MAX_LINE_LENGTH];
    // selection sort: walk over the array, find the min, and swap it here
    for (int i = 0; i < n; i++) {
        min_idx = get_min_in_range(lines, i, n); // find min
        // swap
        strcpy(og_lines_i, lines[i]);
        strcpy(lines[i], lines[min_idx]);
        strcpy(lines[min_idx], og_lines_i);
    }
}
