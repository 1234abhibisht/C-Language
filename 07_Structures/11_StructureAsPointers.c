#include <stdio.h>
typedef struct Pokemon
{
    int attack;
    int hp;
} Pokemon;

int main()
{
    Pokemon pikachu;
    Pokemon *ptr = &pikachu;
    ptr->attack = 100;
    ptr->hp = 80;
    printf("%d\n", ptr->attack);
    printf("%d\n", ptr->hp);
    return 0;
}
