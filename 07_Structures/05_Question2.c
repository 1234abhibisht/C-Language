/* A recod conatins name of cricketer, his age, number of test matches that he has played and
   average runs that he has scored in each test match. Create an array of structure to hold
    record of 3 such cricketer and then write a program to read these records */

#include <stdio.h>
#include <string.h>
typedef struct Cricketer
{
    char name[40];
    int age;
    int testMatches;
    int averageRuns;
} Cricketer;

int main()
{
    Cricketer arr[3];
    for (int i = 0; i <= 2; i++)
    {
        printf("Enter name : \n");
        fgets(arr[i].name, 40, stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        printf("Enter age : \n");
        scanf("%d", &arr[i].age);
        getchar();
        printf("Ente number of testMatches played : \n");
        scanf("%d", &arr[i].testMatches);
        getchar();
        printf("Enter average runs scored per match : \n");
        scanf("%d", &arr[i].averageRuns);
        getchar();
        printf("\n");
    }

    for (int i = 0; i <= 2; i++)
    {
        printf("Name is %s\n", arr[i].name);
        printf("Age is %d\n", arr[i].age);
        printf("Test Matches played are %d\n", arr[i].testMatches);
        printf("Average runs scored per match are %d\n", arr[i].averageRuns);
        printf("\n");
    }
    return 0;
}