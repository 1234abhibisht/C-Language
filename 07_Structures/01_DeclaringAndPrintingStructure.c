#include <stdio.h>
int main()
{
    struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier; /* S,A,B,C,D*/
    };
    struct Pokemon pikachu;
    printf("Enter attack of pikachu : ");
    scanf("%d", &pikachu.attack);
    printf("%d\n", pikachu.attack);

    struct Pokemon charizard;
    printf("Enter tier of charizard : ");
    scanf(" %c", &charizard.tier);
    printf("%c", charizard.tier);
    return 0;
}