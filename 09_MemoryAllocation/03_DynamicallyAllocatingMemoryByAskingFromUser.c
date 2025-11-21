#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int elements = 0;
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter your elements : ");
    while (elements <= n - 1)
    {
        scanf("%d", &arr[elements]);
        elements++;
    }

    while (1)
    {
        printf("Do you want to enter more elements than given size\n");
        printf("Enter 'y' for yes and 'n' for no : ");
        char choice;
        scanf(" %c",&choice);
        if (choice == 'n')
        {
            printf("Your array is : ");
            for(int i = 0; i <= elements - 1; i++) {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        }
        else if (choice == 'y')
        {
            int newValue;
            printf("Enter your extra element : ");
            scanf("%d", &newValue);
            if (n == elements)
            {
                n *= 2;
                arr = realloc(arr, n * sizeof(int));
            }
            arr[elements] = newValue;
            elements++;
        }
    }
    return 0;
}