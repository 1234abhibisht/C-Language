#include <stdio.h>
void uppercase(int ASCII, char alphabet) {
    ASCII = alphabet;
    for(int i = 65; i <= 90; i++) {
        if(ASCII == i) printf("%c is uppercase alphabet",alphabet);
    }
}
void lowercase(int ASCII2, char alphabet) {
    ASCII2 = alphabet;
    for(int j = 97; j <= 122; j++) {
        if(ASCII2 == j) printf("%c is lowercase alphabet",alphabet);
    }
}
void specialcharacters(char alphabet, int ASCII3) {
    ASCII3 = alphabet;
    for(int k = 21; k <= 40; k++) {
        if(ASCII3 == k) printf("%c is a special character",alphabet);
    }
}
void digits(int dig) {
    for(int l = 1; l <= 100000; l++) {
        if(dig == l) printf("%d is a digit",l);
    }
}
int main() {
    int ASCII, ASCII2, ASCII3, dig;
    char alphabet;
    printf("Enter something : ");
    scanf("%c",&alphabet);
    uppercase(ASCII,alphabet);
    lowercase(ASCII2,alphabet);
    specialcharacters(alphabet,ASCII3);
    digits(dig);
    return 0;
}
