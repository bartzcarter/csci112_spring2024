#include<stdio.h>
#define BUFFER_SIZE 100

//insertion sort function 
void selectionSort(double arr[], size_t n) {
    size_t i, j, min_index;
    double temp;

    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;

        // Print the array after each pass
        for (size_t k = 0; k < n; k++) {
            printf("%.2f ", arr[k]);
        }
        printf("\n");
    }
}

int main(){
    
    //array of doubles
    double arr[BUFFER_SIZE];
    //ptr to input and output files
    FILE *in;
    FILE *out;
    in = fopen("/public/labs/lab6/numbers.txt", "r");
    out = fopen("outdata.txt", "w");

    //make sure files are not empty
    if(in == NULL || out == NULL){
        printf("file error");
        return 1;
    }

    //read the input file and store values in arr
    size_t elements_read = 0;
    while(fscanf(in, "%lf", &arr[elements_read]) == 1 && elements_read < BUFFER_SIZE){
        //incriment
        elements_read++;
    }

    printf("Before sorting, arr of numbers is\n");
    //print to output file
    for(int i=0; i<elements_read; i++){
        printf("%.2f ", arr[i]);
    }

    printf("\nNow performing selection sort:\n");

    //sort array using insertion sort
    selectionSort(arr, elements_read);

    //write data to output file
    for(int i=0; i<elements_read; i++){
        fprintf(out, "%.2f\n", arr[i]);
    }

    fclose(in);
    fclose(out);

    return 0;
}
