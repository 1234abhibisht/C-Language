#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    pokemon arr[2];

    /* pokemon 1 */
    arr[0].attack = 100;
    arr[0].hp = 120;
    arr[0].speed = 120;
    arr[0].tier = 'S';
    strcpy(arr[0].name, "Charizard");

    /* pokemon 2 */
    arr[1].attack = 120;
    arr[1].hp = 80;
    arr[1].speed = 130;
    arr[1].tier = 'A';
    strcpy(arr[1].name, "Pikachu");

    for (int i = 0; i <= 1; i++)
    {
        printf("Name : %s\n", arr[i].name);
        printf("HP : %d\n", arr[i].hp);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %c\n", arr[i].tier);
        printf("Attack : %d\n", arr[i].attack);
    }
    return 0;
}