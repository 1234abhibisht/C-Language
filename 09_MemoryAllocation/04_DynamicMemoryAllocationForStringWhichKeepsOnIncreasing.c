#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 10;
    int elements = 0;
    char *str = malloc(size);
    /* as character takes only 1 byte, so no need to multiply with sizeof(char) */

    if (str == NULL)
    {
        printf("Memory allocaton failed");
        return 1;
    }

    int ch;
    printf("Enter your string : ");
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        if (size == elements)
        {
            size *= 2;
            str = realloc(str, size);
            if (str == NULL)
            {
                printf("Memory reallocaton failed");
                return 1;
            }
        }
        str[elements] = ch; /* as ch has ASCII values of character, so automically it will be typecasted */
        elements++;
    }
    str[elements] = '\0'; /* terminate the last character by making it '\0' */

    printf("%s\n",str);
    return 0;
}
