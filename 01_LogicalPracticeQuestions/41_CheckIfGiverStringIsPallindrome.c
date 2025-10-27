#include <stdio.h>
void pallindromeString(char str[], int i, int j)
{
    /* str1 is str array itself but before reversing */
    while (i < j)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    char str[10];
    printf("Enter your string : ");
    fgets(str, 10, stdin);
    char str1[10];
    /* after reversing str, it is now updated, so we have to store str before reversing into another
    array */
    for (int i = 0; i <= 9; i++)
    {
        str1[i] = str[i];
    }
    /* first call the function so that we can get reversed string in str */
    pallindromeString(str, 0, 9);
    int x = 0;
    for (int j = 0; j <= 9; j++)
    {
        if (str[j] == str1[j])
        {
            x = 1;
        }
    }
    if (x == 0)
    {
        printf("It is not pallindrome string");
    }
    else
    {
        printf("It is pallindrome string");
    }
    return 0;
}
