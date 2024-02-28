#include <stdio.h>

void get_stats(int arr[], int *min, int *max, int n) {
    
    int temp_min = arr[0];
    int temp_max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < temp_min)
            temp_min = arr[i];
        if (arr[i] > temp_max)
            temp_max = arr[i];
    }

    // todo: finish get_stats so that what min
    // and max point to are the values of temp_min and temp_max 
    *min = temp_min;
    *max = temp_max;
}

int main(void) {
    int size, min, max;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d ints separated by whitespace: ", size);
    for(int i = 0; i < size; i++) {
       scanf("%d", &arr[i]); 
    }

    // todo: call get_stats so that min and max contain the 
    // min and max of arr. Use pass by reference where appropriate!
    get_stats(arr, &min, &max, size);

    printf("Min and max are %d and %d\n", min, max);
}
