#include <stdio.h>

// function prototype--don't change
int compute_remainder(int, int);

// definition of the compute_remainder function
int compute_remainder(int dividend, int divisor) {
    return dividend % divisor;
}

// no need to change main, either
int main(void) {

    int num1, num2;
    printf("Please enter two integers separated by whitespace: ");
    scanf("%d %d", &num1, &num2);

    int num3 = compute_remainder(num1, num2);
    printf("When dividing %d by %d, the remainder is %d.\n", num1, num2, num3);

    return(0);
}
