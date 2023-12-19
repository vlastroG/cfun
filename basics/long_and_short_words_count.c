#include <stdio.h>

/*
 * Program reads input and writes count of words, which consists of 7 or more
 * letters and which consists no more than 2 letters, in each line.
 */

int main() {
    int c, letters_count, long_words_count, short_words_count;
    long_words_count = short_words_count = letters_count = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            letters_count++;
        } else {
            if (letters_count > 0) {
                if (letters_count > 7) {
                    long_words_count++;
                } else if (letters_count <= 2) {
                    short_words_count++;
                }
            }
            letters_count = 0;
            if (c == '\n') {
                printf(
                    "More than 7 letter words count = %d, no greater than 2 "
                    "letters words count = %d\n",
                    long_words_count, short_words_count);
                long_words_count = short_words_count = 0;
            }
        }
    }
    return 0;
}
