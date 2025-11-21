/* append means to add some text in a file */

#include <stdio.h>
int main()
{
    FILE *f = fopen("newfile.txt", "a");
    if (f == NULL)
    {
        printf("No such file found");
        return 1;
    }

    /* append content in a file */
    fprintf(f, "Hello");

    fclose(f);
    return 0;
}
