#include <stdio.h>

/*
 * This program reads lines and writes count of words,
 * length of the longest and of the shortest word per each line.
 */

int main() {
    int c, words_count, longest_length, shortest_length, letters_count;
    words_count = shortest_length = longest_length = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            letters_count++;
        } else {
            if (letters_count > 0) {
                if (letters_count > longest_length) {
                    longest_length = letters_count;
                }
                if (shortest_length == 0 || letters_count < shortest_length) {
                    shortest_length = letters_count;
                }
                words_count++;
            }
            letters_count = 0;
            if (c == '\n') {
                printf(
                    "Total words count = %d, the shortest word length = %d, "
                    "the longest word length = %d\n",
                    words_count, shortest_length, longest_length);
                words_count = shortest_length = longest_length = 0;
            }
        }
    }
}
