/* Create a structure 'person' having attributes as age and weight. Access its structure variables
   using pointers */

#include <stdio.h>
typedef struct Person
{
    int age;
    int weight;
} Person;

int main()
{
    Person a;
    Person *ptr = &a;
    ptr->age = 30;
    ptr->weight = 70;
    printf("%d\n", ptr->age);
    printf("%d\n", ptr->weight);
    return 0;
}
