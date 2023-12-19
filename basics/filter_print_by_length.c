#include <stdio.h>

/*
 * This program reads lines and prints only 2-letter words.
 */

int main() {
    int c, first_char, second_char, count, last_char_is_space;
    last_char_is_space = 1;
    count = 0;
    while ((c = getchar()) != EOF) {
        if (last_char_is_space && c != ' ' && c != '\t' && c != '\n') {
            count++;
            first_char = c;
            last_char_is_space = 0;
        } else if (!last_char_is_space && c != ' ' && c != '\t' && c != '\n') {
            count++;
            if (count == 2) {
                second_char = c;
            }
        } else if (c == ' ' || c == '\t' || c == '\n') {
            if (!last_char_is_space && count == 2) {
                putchar(first_char);
                putchar(second_char);
            }
            count = 0;
            last_char_is_space = 1;
            putchar(c);
        }
    }
    return 0;
}
