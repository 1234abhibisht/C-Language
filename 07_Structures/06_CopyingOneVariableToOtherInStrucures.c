#include <stdio.h>
typedef struct Pokemon
{
    int attack;
    int hp;
    char tier;
} Pokemon;

int main()
{
    Pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 80;
    pikachu.tier = 'A';

    Pokemon charizard;
    /* now I want to copy the value of variables of pikachu to charizad
       charizard.attack = 100
       charizard.hp = 80
       charizard.tier = 'A' */
    charizard = pikachu;

    printf("Attack of pikachu %d\n", pikachu.attack);
    printf("hp of pikachu %d\n", pikachu.hp);
    printf("Tier of pikachu %c\n", pikachu.tier);
    printf("\n");
    printf("Attack of charizard %d\n", charizard.attack);
    printf("hp of charizard %d\n", charizard.hp);
    printf("Tier of charizard %c\n", charizard.tier);

    return 0;
}