#include <stdio.h>

int main(void) {
    char grade;

    printf("Enter the grade you got: ");
    scanf("%c", &grade);

    printf("You earned ");
    switch(grade) {
            case 'A':
            case 'a':
            printf("at least 93 points in the class.");
            break;

            case 'B':
            case 'b':
            printf("at least 83 points in the class.");
            break;

            case 'C':
            case 'c':
            printf("at least 73 points in the class.");
            break;

            case 'D':
            case 'd':
            printf("at least 63 points in the class.");
            break;

            case 'F':
            case 'f':
            printf("an unknown number of points in the class.");

    default:
        printf("an unknown number of points in the class.");
    }

    printf("\n");

    return(0);
}
