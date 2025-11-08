#include <stdio.h>
int main()
{
    typedef struct pokemon /* pokemon is a class */
    {
        int hp;
        int speed;
        int attack;
        char tier; /* S,A,B,C,D*/
    } x;           /* struct pokemon is replace by x */

    x pikachu; /* now we dont need to write struct pokemon pikachu, instead write x pikachu */
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.hp = 70;
    pikachu.tier = 'A';

    x charizard;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.hp = 110;
    charizard.tier = 'S';
    return 0;
}