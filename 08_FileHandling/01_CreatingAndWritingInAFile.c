/* Write a program to create a new file and write text into it. */

#include <stdio.h>
int main()
{
    /* creating a new file */
    FILE *createFile = fopen("newfile.txt", "w");

    /* writing text into file */
    char text[100];
    printf("Enter text to write in file : ");
    fgets(text, 100, stdin);
    fputs(text, createFile);

    fclose(createFile);
    printf("Input completed\n");
    return 0;
}
