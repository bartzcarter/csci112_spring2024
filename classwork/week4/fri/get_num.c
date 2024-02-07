#include <stdio.h>

int main(void) {
    int status;
    double num;

    do {
        printf("Enter a number between 0 and 100: (decimals okay): ");
        status = scanf("%lf", &num);
        if (status != 1)
            break;
    } while (num < 0 || num > 100);

    if (status != 1)
        printf("You didn't enter a number\n");
    else 
        printf("You entered %.2f\n", num);

    return 0;
        
}
