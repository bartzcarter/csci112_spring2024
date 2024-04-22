#include <stdlib.h>
#include <stdio.h>

int main(void) {
    long n;
    printf("How many integers would you like to store? ");
    scanf("%ld", &n);
    printf("Allocating space for %ld ints\n", n);

    int* intarr = malloc(sizeof(int) * n);

    // TODO: if this allocation was unsuccessful, print "Not enough memory" and end the program
    if (intarr == NULL) {
        printf("Not enough memory\n");
        return 1; // indicate failure
    }    

    printf("How many do you want to store now? ");
    scanf("%ld", &n);
    printf("Allocating space for %ld ints\n", n);

    // TODO: use realloc to allocate new memory with n slots
    int* temp = realloc(intarr, sizeof(int) * n);

    // TODO: if this allocation was unsuccessful, print "Not enough memory" and end the program
    if (temp == NULL) {
        printf("Not enough memory\n");
        free(intarr); // free the previously allocated memory
        return 1; // indicate failure
    }
    intarr = temp; // assign the new memory to intarr 
   
    for (int i = 0; i < n; i++) {
        intarr[i] = i;
    }

    free(intarr);



}
