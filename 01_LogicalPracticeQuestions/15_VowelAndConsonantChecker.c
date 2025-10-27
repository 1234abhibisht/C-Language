#include <stdio.h>
void VowelConsonant(char alphabet) {
    int checker = alphabet;  /* if we put character inside interger variable it will give its ascii value */
    if(checker == 97) printf("%c is a vowel",alphabet);
    else if(checker == 101) printf("%c is a vowel",alphabet);
    else if(checker == 105) printf("%c is a vowel",alphabet);
    else if(checker == 111) printf("%c is a vowel",alphabet);
    else if(checker == 117) printf("%c is a vowel",alphabet);
    else printf("%c is consonant",alphabet);
} 
int main() {
    char alphabet;
    printf("Enter an alphabet : ");
    scanf("%c",&alphabet);
    VowelConsonant(alphabet);
    return 0;
}
