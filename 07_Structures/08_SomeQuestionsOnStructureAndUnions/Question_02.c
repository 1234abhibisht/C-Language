/* Write a C program to compute the monthly pay of 100 employees using each employee‗s name,
basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA).
Print the employees name and gross salary. */

#include <stdio.h>
#include <string.h>
typedef struct EmployeeDetails
{
    char name[40];
    unsigned int basicPay;
    double DA;
    double grossSalary;
} EmployeeDetails;

void detailsPrint(EmployeeDetails arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        printf("################################\n");
        printf("Name of employee is %s\n", arr[i].name);
        printf("Basic Pay of %s is %d\n", arr[i].name, arr[i].basicPay);
        printf("DA of %s is %g\n", arr[i].name, arr[i].DA);
        printf("Gross salary of %s is %g\n", arr[i].name, arr[i].grossSalary);
        printf("################################\n");
        printf("\n");
    }
    return;
}

int main()
{
    int n;
    printf("Enter how many employees data you want to input : ");
    scanf("%d", &n);
    getchar();
    EmployeeDetails arr[n];
    int i = 0;
    while (i <= n - 1)
    {
        printf("Enter name of employee : \n");
        fgets(arr[i].name, 40, stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Enter basic pay : ");
        scanf("%d", &arr[i].basicPay);
        getchar();

        arr[i].DA = 0.52 * arr[i].basicPay;

        arr[i].grossSalary = arr[i].basicPay + arr[i].DA;

        i++;
    }

    detailsPrint(arr, n);
    return 0;
}
