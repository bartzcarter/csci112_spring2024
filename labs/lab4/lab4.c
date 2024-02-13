//lab 4

#include<stdio.h>

int main(){
    //number of hot days
    int hotDays = 0;
    //number of pleasant days
    int pleasantDays = 0;
    //number of cold days
    int coldDays = 0;
    //current temp
    int temp;
    //total temp
    double totalTemp;
    //counter to keep track of total number of temps/days
    int counter = 0;

    //while loop to get user input for temps and keep track of hot, pleasant, and cold days
    do{
        //prompt user for temp
        printf("Enter a high temp reading (-99 to quit)> ");
        //get user input
        scanf("%d", &temp);
        //if temp is greater than or equal to 85, increment hot days and add temp to total temp
        if(temp >= 85){
            hotDays++;
            totalTemp += temp;
            counter++;
        }
        //if temp is between 60 and 84, increment pleasant days and add temp to total temp
        else if(temp >= 60 && temp <= 84){
            pleasantDays++;
            totalTemp += temp;
            counter++;
        }
        //if temp is less than 60, increment cold days and add temp to total temp
        else if(temp < 60 && temp != -99){
            coldDays++;
            totalTemp += temp;
            counter++;
        }
    }while(temp != -99);

    //print new line
    printf("\n");
    
    //print hot days
    printf("H: ");
    for(int i=0; i<hotDays; i++){
        printf("*");
    }

    //print new line
    printf("\n");

    //print pleasant days
    printf("P: ");
    for(int i=0; i<pleasantDays; i++){
        printf("*");
    }

    //print new line
    printf("\n");

    //print cold days
    printf("C: ");
    for(int i=0; i<coldDays; i++){
        printf("*");
    }

    //print new line
    printf("\n");
    //print avg temp
    printf("Average temperature: %.1f", totalTemp/counter);

    //print new line
    printf("\n");

    return 0;
}
