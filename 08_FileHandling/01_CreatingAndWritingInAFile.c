/* Write a program to create a new file and write text into it. */

#include <stdio.h>
int main() {
    /* create and open file */
    FILE* f = fopen("newfile.txt", "w");

    /* check if file is failed to open */
    if(f == NULL) {
        /* if file is failed to open, it will give an error code */
        perror("fopen");
        return 1;
    }

    /* writing inside the file */
    fprintf(f, "Name : Abhishek Bisht \nAge : 20 \nCity : Dehradun\n");

    /* close the file */
    fclose(f);
    return 0;
}
