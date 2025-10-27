#include <stdio.h>
int main() {
    int firstnumber;
    printf("Enter first number : ");
    scanf("%d",&firstnumber);
    int secondnumber;
    printf("Enter second number : ");
    scanf("%d",&secondnumber);
    char operator;
    printf("Enter operator (+,-,/,*) for your operation : ");
    scanf(" %c",&operator);  /* after taking input of an integer, if we are taking input of a character always use 
                                space before %c because integer leaves \n (newline space) after it, and %c takes space 
                                as input insted of which we will provide */
    switch(operator) {
        case '+' : { 
                 int sum = firstnumber + secondnumber;
                 printf("Sum of %d and %d is : %d",firstnumber,secondnumber,sum);
                 break;
        }
        case '-' : { 
                 int difference = firstnumber - secondnumber;
                 printf("Difference of %d and %d is : %d",firstnumber,secondnumber,difference);
                 break;
        }
        case '*' : { 
                 int mul = firstnumber * secondnumber;
                 printf("Multiplication of %d and %d is : %d",firstnumber,secondnumber,mul);
                 break;
        }
        case '/' : { 
                 int div = firstnumber / secondnumber;
                 if(secondnumber > 0) { 
                    printf("Division of %d and %d is : %d",firstnumber,secondnumber,div);
                 }
                 else {
                    printf("Invalid operation");
                 }
                 break;
        }
        default : printf("Invalid operation");
    }
    return 0;
}
