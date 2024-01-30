#include<stdio.h>

    int calculateTotalPay(int day1, int day2, int day3) {
        int totalPay = day1 + day2 + day3;
        return totalPay;
    }

    int promptForHours(int day) {
        printf("Enter hours worked on day %d: ", day);
        int hoursWorked = 0;
        scanf("%d", &hoursWorked);  // Use the address of hoursWorked
        printf("Enter hourly wage on day %d: ", day);
        int hourlyWage = 0;
        scanf("%d", &hourlyWage);   // Use the address of hourlyWage
        return hoursWorked * hourlyWage;
    }

    void printTotalPay(int totalPay) {
        printf("Your total pay is $%d", totalPay);
    }

    int main(){
        int day1 = promptForHours(1);
        int day2 = promptForHours(2);
        int day3 = promptForHours(3);
        int totalPay = calculateTotalPay(day1, day2, day3);
        printTotalPay(totalPay);
        return 0;
    }

