#include "fight.h"
#include "character.h"
#include <stdio.h>
#include <math.h>

void fight(Character *p1, Character *p2){
    printf("### LET'S FIGHT ###\n");
    if(p1->XP == p2->XP){
        printf("%s (%d XP, %d HP) vs. %s (%d XP, %d HP)\n", 
            p1->name, (int)p1->XP, (int)p1->HP, 
            p2->name, (int)p2->XP, (int)p2->HP);
        printf("It's a tie!\n\n");
        printf("Result is:\n");
        printf("%s (%d XP, %d HP)\n", p1->name, (int)p1->XP, (int)p1->HP);
        printf("%s (%d XP, %d HP)\n", p2->name, (int)p2->XP, (int)p2->HP);
        return;
    }
    printf("%s (%d XP, %d HP) vs. %s (%d XP, %d HP)\n", 
            p1->name, (int)p1->XP, (int)p1->HP, 
            p2->name, (int)p2->XP, (int)p2->HP);
    if(p1->XP > p2->XP){
        //If p1 wins p1 deals p1 xp - p2 xp damage to p2 HP;
        //p1 xp = xp + log10(xp); rounded to the nearest integer;
        //p2 xp = xp(1.5); rounded to the nearest integer;

        //calculate damage delt
        double damageDelt = p1->XP - p2->XP;

        //calculate new HP
        p2->HP -= (int)damageDelt;

        //calculate new XP
        p1->XP = p1->XP + log10(p1->XP);
        p2->XP *= 1.5;
        p1->XP = round(p1->XP);
        p2->XP = round(p2->XP);

        //print results
        printf("%s deals %d damage to %s\n\n", p1->name, (int)damageDelt, p2->name);
        printf("Result is:\n");
        printf("%s (%d XP, %d HP)\n", p1->name, (int)p1->XP, (int)p1->HP);

        //check if p2 is dead
        if(p2 -> HP <=0){
            printf("%s (deceased) (%d XP, %d HP)", p2->name, (int)p2->XP, (int)p2->HP);
        }
        //print p2 results
        else{
            printf("%s (%d XP, %d HP)\n", p2->name, (int)p2->XP, (int)p2->HP);
        }
    }
    else{
        //If p2 wins p2 deals p2 xp - p1 xp damage to p1 HP;
        //p2 xp = xp + log10(xp); rounded to the nearest integer;
        //p1 xp = xp(1.5); rounded to the nearest integer;

        //calculate damage delt
        double damageDelt = p2->XP - p1->XP;

        //calculate new HP
        p1->HP -= (int)damageDelt;

        //calculate new XP
        p2->XP = p2->XP + log10(p2->XP);
        p1->XP *= 1.5;
        p1->XP = round(p1->XP);
        p2->XP = round(p2->XP);

        //print results
        printf("%s deals %d damage to %s\n\n", p2->name, (int)damageDelt, p1->name);
        printf("Result is:\n");
        printf("%s (%d XP, %d HP)\n", p1->name, (int)p1->XP, (int)p1->HP);

        //check if p1 is dead
        if(p1 -> HP <=0){
            printf("%s (deceased) (%d XP, %d HP)", p2->name, (int)p2->XP, (int)p2->HP);
        }
        //print p1 results
        else{
            printf("%s (%d XP, %d HP)\n", p2->name, (int)p2->XP, (int)p2->HP);
        }
    }
}

