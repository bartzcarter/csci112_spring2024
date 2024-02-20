//week 11 classwork 

#include <stdio.h>

// TODO: implement the cumulative sum function
void cumulative_sum(double arr[], double result[], int n){
    result[0] = arr[0];
    for(int i=1; i<n; i++){
        result[i] = result[i-1] + arr[i];
    }
}

int main(void) {
    double arr[] = {65.4, 76.8, 9.2, 54.01};
    double result[] = {0, 0, 0, 0};
    int n = 4;

    cumulative_sum(arr, result, n);

    printf("result:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", result[i]);
    }
    printf("\n");

}
