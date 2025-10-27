#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int pallindromeString(char str[], int i, int j)
{
    if (i >= j)
    {                /* base case */
        return true; /* end the function */
    }
    if (str[i] != str[j])
    {
        return false; /* strings are not pallindrome */
    }
    return pallindromeString(str, i + 1, j - 1);
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';

    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    bool check = pallindromeString(str, 0, size - 1);
    if (check == false)
    {
        printf("String is not pallindrome");
    }
    else
    {
        printf("String is pallindrome");
    }
    return 0;
}
