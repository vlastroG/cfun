#include <stdio.h>

int main() {
    int c, prev_letter_is_space, count;
    count = 0;
    prev_letter_is_space = 1;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("%d\n", count);
            prev_letter_is_space = 1;
            count = 0;
        } else if (prev_letter_is_space && (c != ' ') && (c != '\t')) {
            count++;
            prev_letter_is_space = 0;
        } else if (c == ' ' || c == '\t') {
            prev_letter_is_space = 1;
        } else {
            continue;
        }
    }
    return 0;
}
