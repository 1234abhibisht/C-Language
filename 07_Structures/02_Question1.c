/* Create a structure type 'Person' with name, salary and age as its attributes. Declare and
   initialize 2 variables for this. Print the name of first person and age of the second */

#include <stdio.h>
#include <string.h>
int main()
{
    struct Person
    {
        char name[20];
        int salary;
        int age;
    } A, B;

    strcpy(A.name, "Spiderman");
    A.salary = 300000;
    A.age = 24;

    strcpy(B.name, "Dr Doom");
    B.salary = 100000;
    B.age = 39;

    printf("Name of first person is %s\n", A.name);
    printf("Age of second person is %d", B.age);
    return 0;
}