#include <stdio.h>
enum Bitwise
{
    sun = 1 << 0,
    mon = 2 << 1,
};
int main()
{
    printf("%d\n", mon);
    return 0;
}