#include<stdio.h>

int main(){
    FILE *inp;
    FILE *outp;

    inp = fopen("/public/classwork/week7/mon/input.txt", "r");
    outp = fopen("output.txt", "w");

    if(inp == NULL || outp == NULL){
        printf("Error opening file\n");
        return 1;
    }

    double item;
    for(int i=0; i<5; i++){
        fscanf(inp, "%lf", &item);
        fprintf(outp, "%.2f\n", item);
    }
    fclose(inp);
    fclose(outp);

    return 0;
}
