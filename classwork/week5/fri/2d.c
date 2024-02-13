//classwork 10 

#include <stdio.h>

int main(void) {

    // read in a 3 by 5 array of ints
    int arr[3][5];
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // for each of the 3 rows, print 
    // the sum of the 5 numbers in the row
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
        printf("Row %d has total %d.\n", i, sum);
        sum = 0;
    }
    return 0;
}
