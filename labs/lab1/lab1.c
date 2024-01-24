
#include <stdio.h>

// Constant macro for the formula
#define FREEZER_TEMPERATURE(t) ((3 * (t) * (t)) / ((t) + 1) - 10)

int main() {
    // Variables to store user input
    int hours, minutes;

    // Prompting user for input
    printf("Hours and minutes since power outage? (e.g., 2 30 for 2 hours, 30 minutes) ");
    scanf("%d %d", &hours, &minutes);

    // Converting minutes to hours and calculating the temperature
    double time_elapsed = hours + (minutes / 60.0);
    double temperature = FREEZER_TEMPERATURE(time_elapsed);

    // Displaying the result with two decimal places
    printf("Estimated current temperature: %.2f degrees Celsius\n", temperature);

    return (0) ;

}
