#include <stdio.h>
typedef struct NormalPokemon
{
    int attack;
    int hp;
    char tier;
} NormalPokemon;

typedef struct LegendaryPokemon
{
    struct NormalPokemon P;
    int specialAttack;
} LegendaryPokemon;

int main()
{
    NormalPokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 80;
    pikachu.tier = 'A';

    LegendaryPokemon mewtwo;
    mewtwo.P.attack = 300;
    mewtwo.P.hp = 400;
    mewtwo.P.tier = 'S';
    mewtwo.specialAttack = 800;

    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%c\n", pikachu.tier);

    printf("%d\n", mewtwo.P.attack);
    printf("%d\n", mewtwo.P.hp);
    printf("%c\n", mewtwo.P.tier);
    printf("%d\n", mewtwo.specialAttack);
    return 0;
}