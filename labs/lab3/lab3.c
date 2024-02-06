#include<stdio.h>

//return 1 if data is within x percent of ref, 0 otherwise
int within_x_percent(double ref, double data, double x) {
    double percent = (data - ref) / ref * 100;
    if (percent < 0) {
        percent = percent * -1;
    }
    if (percent <= x) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main(void) {
    printf("Observed boiling point (in deg. C)? ");
    double observed_bp;
    scanf("%lf", &observed_bp);
    printf("You entered %.2f percent\n", observed_bp);

    double water_bp = 100; // the boiling point of water
    double mercury_bp = 357; // the boiling point of mercury
    double copper_bp = 1187; // the boiling point of copper
    double silver_bp = 2193; // the boiling point of silver
    double gold_bp = 2660; // the boiling point of gold

    printf("Custom error percent? n for no (5%% default), y for yes: ");
    char custom;
    scanf(" %c", &custom);
    double percent;
    if (custom == 'n' || custom == 'N') {
        percent = 5;
    } 
    else if (custom == 'y' || custom == 'Y'){
        printf("Enter error percent:");
        scanf("%lf", &percent);
    }
    else {
        printf("Error: bad input");
        return(1);
    }

    if (within_x_percent(water_bp, observed_bp, percent) == 1) {
        printf("Substance is water\n");
    } 
    else if (within_x_percent(mercury_bp, observed_bp, percent) == 1) {
        printf("Substance is mercury\n");
    }
    else if (within_x_percent(copper_bp, observed_bp, percent) == 1) {
        printf("Substance is copper\n");
    }
    else if (within_x_percent(silver_bp, observed_bp, percent) == 1) {
        printf("Substance is silver\n");
    }
    else if (within_x_percent(gold_bp, observed_bp, percent) == 1) {
        printf("Substance is gold\n");
    }
    else{
        printf("Substance unknown\n");
    }


    return(0);

}


