/* to pass structre in a function, always declare structure datatype outside every function, as a
   global variable so it can be accissible to main as well as other functions */

/* structures are passed by value by default */

#include <stdio.h>
struct Pokemon
{
    int attack;
    int hp
};

void passStructure(struct Pokemon pikachu)
{
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    return;
}

int main()
{
    struct Pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 80;
    passStructure(pikachu);
    return 0;
}