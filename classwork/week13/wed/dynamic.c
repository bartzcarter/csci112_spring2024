#include <stdio.h>
#include <stdlib.h>

typedef struct {
      int x;
      int y;
} Point;

int main(void) {
    Point *mypoint = NULL;

    // TODO: dynamically allocate a point and have mypoint point to it
    mypoint = (Point*)malloc(sizeof(Point));

    mypoint->x = 10;
    mypoint->y =5 ;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    int *intarr;

    // TODO: dynamically allocate an array of ints with capacity 5
    // and have intarr point to it
    intarr = (int*)malloc(5 * sizeof(int));

    intarr[0] = 0;
    intarr[1] = 1;
    intarr[2] = 2;

    printf("intarr[2]=%d\n", intarr[2]);

    // TODO: free the memory for mypoint and intarr
    free(mypoint);
    free(intarr);

    return 0;
}
