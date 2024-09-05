#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Convert to uppercase
    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("The capitalized string is: %s\n", str);

    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}
