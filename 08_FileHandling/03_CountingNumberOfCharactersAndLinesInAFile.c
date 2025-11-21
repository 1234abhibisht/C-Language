#include <stdio.h>
int main()
{
    FILE *f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("No such file or directory\n");
        return 1;
    }

    int ch, chars = 0, line = 0;
    while ((ch = fgetc(f)) != EOF)
    {
        chars++;
        if (ch == '\n')
        {
            line++;
        }
    }

    printf("Number of characters are %d\n", chars);
    printf("Number of lines are %d", line);

    fclose(f);
    return 0;
}
