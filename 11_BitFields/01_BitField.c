#include <stdio.h>
typedef struct Values
{
    unsigned int x : 1;
    unsigned int y : 1;
    unsigned int z : 1;
} Values;

int main()
{
    Values A = {1, 0, 1};
    /* here 1 and 0 act as flag, 1 for true and 0 for false */

    printf("%u\n%u\n%u\n", A.x, A.y, A.z);
    return 0;
}