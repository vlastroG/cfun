#include <stdio.h>

/*
 *  Program reads input and writes after each input line two numbers:
 *  first number = sum of words, which consist of even count of letters,
 *  second number = sum of words, which consist of odd count of letters
 */

int main() {
    int c, odd_count, even_count, letters_count;
    even_count = odd_count = letters_count = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            letters_count++;
        } else {
            if (letters_count) {
                letters_count % 2 ? odd_count++ : even_count++;
            }
            letters_count = 0;
            if (c == '\n') {
                printf("Even words count = %d, odd words count = %d\n",
                       even_count, odd_count);
                even_count = odd_count = 0;
            }
        }
    }
    return 0;
}
