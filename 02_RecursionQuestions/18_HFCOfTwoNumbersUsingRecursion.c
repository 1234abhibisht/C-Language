/* greatest common divisor or highest common factor */
#include <stdio.h>
int hcf(int firstnumber, int secondnumber)
{
    /* hcf of (2,0) is 2 itself */
    if (secondnumber == 0)
    {
        return firstnumber;
    }
    /* hcf of (0,2) is 0 */
    else if (firstnumber == 0)
    {
        return 0;
    }
    /* firstnumber > secondnumber */
    else if (firstnumber < secondnumber)
    {
        return 0;
    }
    return hcf(secondnumber, firstnumber % secondnumber);
}
int main()
{
    int firstnumber;
    printf("Enter first number : ");
    scanf("%d", &firstnumber);
    int secondnumber;
    printf("Enter second number : ");
    scanf("%d", &secondnumber);
    printf("HCF of %d and %d is %d", firstnumber, secondnumber, hcf(firstnumber, secondnumber));
    return 0;
}