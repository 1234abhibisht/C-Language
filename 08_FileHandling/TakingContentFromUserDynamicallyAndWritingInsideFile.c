#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f = fopen("hello.txt", "w");
    if (!f)
    {
        perror("fopen");
        exit(1);
    }

    printf("Enter the content to be written in the file : ");
    int size = 5;
    int elements = 0;
    char *str = (char *)malloc(size);
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n' )
    {
        if (size == elements)
        {
            size *= 2;
            str = realloc(str, size);
        }
        str[elements] = ch;
        elements++;
    }
    str[elements] = '\0';

    fprintf(f, "%s", str);
    rewind(f);

    fclose(f);
    return 0;
}
