#include <stdio.h>
#include <stdlib.h>

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf("%c", &character);

    printf("Integer equivalent: ");
    if (character >= 'A' && character <= 'C') {
        printf("%d\n", character);
    } else if (character >= 'a' && character <= 'c') {
        printf("%d\n", character);
    } else if (character >= '0' && character <= '2') {
        printf("%d\n", character);
    } else if (character == '$' || character == '*' || character == '+' || character == '/') {
        printf("%d\n", character);
    } else if (character == ' ') {
        printf("%d\n", character);
    } else {
        printf("Character not recognized.\n");
    }

    return 0;
}
