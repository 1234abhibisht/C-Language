  GNU nano 7.2                                            Lab_02.c
/* Open an existing file and read its content character by character and then close the file */

/* here we have to read and print file character by character */

#include <stdio.h>
int main()
{
    /* first we have to open the file */
    FILE *openFile = fopen("newfile.txt", "r");

    /* now access the content inside the file */
    int ch;
    while ((ch = fgetc(openFile)) != EOF)
    {
        putchar(ch);
    }

    fclose(openFile);
    return 0;
}

