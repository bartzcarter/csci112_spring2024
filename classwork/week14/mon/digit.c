#include <stdio.h>
#include <stdlib.h>

// TODO: define a digit struct with an int field d and pointer to a digit field next
typedef struct digit{
	int d;
	struct digit* next;
}digit;

int main(void) {

    digit* d1 = malloc(sizeof(digit)); 
    digit* d2 = malloc(sizeof(digit));
    digit* d3 = malloc(sizeof(digit));

    // TODO: set d1's d to 1, d2's d to 2, and d3's d to 3
    d1->d = 1;
    d2->d = 2;
    d3->d = 3;	

    // TODO: set d1's next to d2, d2's next to d3, and d3's next to NULL
    d1->next = d2;
    d2->next = d3;
    d3->next = NULL;

    //print the linked list
    digit* current = d1;
    while (current != NULL) {
        printf("%d->", current->d);
        current = current->next;
    }
    printf("\n");

    // Free memory
    free(d1);
    free(d2);
    free(d3);

    return 0;
}
