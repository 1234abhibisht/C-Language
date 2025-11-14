#include <stdio.h>
typedef struct Pokemon
{
    char name[40];
    int attack;
    int hp;
    char tier;
} Pokemon;

int main()
{
    Pokemon pikachu = {"Pikachu", 100, 80, 'A'};
    Pokemon charizard = {"Charizard", 120, 100, 'S'};

    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%c\n", pikachu.tier);
    printf("\n");

    printf("%s\n", charizard.name);
    printf("%d\n", charizard.attack);
    printf("%d\n", charizard.hp);
    printf("%c\n", charizard.tier);
    return 0;
}
