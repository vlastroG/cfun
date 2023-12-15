#include <stdio.h>

/*
 * This program reads line and print count of words
 * which start with 'A' and end with 'z'
 */

int main() {
    int c, count, starts_with_a, ends_with_z, prev_letter_is_space;
    starts_with_a = ends_with_z = 0;
    prev_letter_is_space = 1;
    while ((c = getchar()) != EOF) {
        if (prev_letter_is_space && c == 'A') {
            starts_with_a = 1;
            prev_letter_is_space = 0;
        } else if (c == ' ' || c == '\t' || c == '\n') {
            if (starts_with_a && ends_with_z) {
                count++;
            }
            starts_with_a = ends_with_z = 0;
            prev_letter_is_space = 1;
            if (c == '\n') {
                printf(
                    "Count of words which start with 'A' and end with 'z' = "
                    "%d\n",
                    count);
                count = 0;
            }
        } else if (starts_with_a && c == 'z') {
            ends_with_z = 1;
            prev_letter_is_space = 0;
        } else {
            prev_letter_is_space = 0;
        }
    }
}
