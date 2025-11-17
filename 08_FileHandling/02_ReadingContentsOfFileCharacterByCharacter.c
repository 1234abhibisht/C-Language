/* Open an existing file and read its content line by line and then close the file */

#include <stdio.h>
int main() {
  FILE* f = fopen("newfile.txt","r");

  if(f == NULL) {
    perror("fopen");
    return 1;
  }

  /* read content inside file, line by line */
  char str[100];
  while(fgets(str, 100, f)) {
    printf("%s",str);
  }

  fclose(f);
  return 0;
}


