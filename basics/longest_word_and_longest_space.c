#include <stdio.h>

/*
 * This program reads lines and writes length of the longest word
 * and length of the longest space sequence
 */

int main() {
    int c, longest_word_length, longest_space_length, letters_count,
        spaces_count;
    longest_word_length = longest_space_length = letters_count = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            if (spaces_count > longest_space_length) {
                longest_space_length = spaces_count;
            }
            spaces_count = 0;
            letters_count++;
        } else {
            if (letters_count > longest_word_length) {
                longest_word_length = letters_count;
            }
            if (c == ' ') {
                spaces_count++;
            } else {
                if (spaces_count > longest_space_length) {
                    longest_space_length = spaces_count;
                }
                spaces_count = 0;
            }
            if (c == '\n') {
                printf(
                    "The longest word length = %d, the longest space sequence "
                    "length = %d\n",
                    longest_word_length, longest_space_length);
                longest_word_length = longest_space_length = 0;
            }
            letters_count = 0;
        }
    }
}
