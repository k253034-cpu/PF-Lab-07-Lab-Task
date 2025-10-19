#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (non-alphabets will be stored): ");
    scanf("%[^A-Za-z]", str);

    printf("You entered (non-alphabetic): %s\n", str);

    return 0;
}

