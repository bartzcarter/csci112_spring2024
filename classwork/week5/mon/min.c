//Classwork 9
#include<stdio.h>

int main(){
    char c1, c2;

    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);

    char minChar = (c1 < c2) ? c1 : c2;

    printf("Min is %c\n", minChar);

    return 0;   
}
