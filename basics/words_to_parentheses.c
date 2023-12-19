#include <stdio.h>

/*
 * This program reads lines and put each word in line into parentheses
 */

int main() {
    int c, last_char_is_space, last_char_is_letter;
    last_char_is_space = 1;
    last_char_is_letter = 0;
    while ((c = getchar()) != EOF) {
        if (last_char_is_space && c != ' ' && c != '\t' && c != '\n') {
            putchar('(');
            last_char_is_space = 0;
            last_char_is_letter = 1;
        } else if (last_char_is_letter &&
                   (c == ' ' || c == '\t' || c == '\n')) {
            putchar(')');
            last_char_is_space = 1;
            last_char_is_letter = 0;
        }
        putchar(c);
    }
    return 0;
}
