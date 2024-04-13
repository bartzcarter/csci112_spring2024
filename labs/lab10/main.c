#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "character.h"
#include "fight.h"

int main(int argc, char *argv[]) {
    Character player1;
    Character player2;

    // Initialize player1
    strcpy(player1.name, argv[1]);
    player1.XP = atoi(argv[2]);
    player1.HP = atoi(argv[3]);

    // Initialize player2
    strcpy(player2.name, argv[4]);
    player2.XP = atoi(argv[5]);
    player2.HP = atoi(argv[6]);

    //Call fight function
    fight(&player1, &player2);
    
    return 0;
}
