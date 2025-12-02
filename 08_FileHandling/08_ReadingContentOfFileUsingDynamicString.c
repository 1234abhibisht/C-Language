#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f = fopen("hello.txt", "r");
    if (!f)
    {
        perror("fopen");
        exit(1);
    }

    /* find size of file */
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    if (size < 0)
    { /* if ftell return -1 due to error */
        size = 0;
    }
    rewind(f);

    /* dynamically create string */
    char *str = (char *)malloc(size + 1); /* +1 for '\0' */
    if (!str)
    {
        printf("Failed to allocate memory");
    }

    /* read content of file in string */
    fread(str, 1, size, f);
    str[size] = '\0';

    rewind(f);

    printf("Content inside file is %s\n", str);

    free(str);
    str = NULL;
    return 0;
}
