/* 1.	Write a C program that uses functions to perform the following operations:
    a.	Reading a complex number.
    b.	Writing a complex number.
    c.	Addition and subtraction of two complex numbers
    d.	Note: represent complex number using a structure.
 */

#include <stdio.h>
typedef struct ComplexNumber
{
    double real;
    double imaginary;
} ComplexNumber;

void additionComplex(ComplexNumber a, ComplexNumber b)
{
    double sumReal = a.real + b.real;
    double sumImg = a.imaginary + b.imaginary;
    printf("Sum of both complex numbers is %g + %g", sumReal, sumImg);
    return;
}

int main()
{
    ComplexNumber a;
    printf("Enter real part of first number : \n");
    scanf("%lf", &a.real);
    printf("Enter imaginary part of first number : \n");
    scanf("%lf", &a.imaginary);

    ComplexNumber b;
    printf("Enter real part of second number : \n");
    scanf("%lf", &b.real);
    printf("Enter imaginary part of second number : \n");
    scanf("%lf", &b.imaginary);

    printf("First complex number is : %g + %gi\n", a.real, a.imaginary);
    printf("Second complex number is : %g + %gi\n", b.real, b.imaginary);

    additionComplex(a, b);
    return 0;
}
