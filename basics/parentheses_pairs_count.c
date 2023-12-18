#include <stdio.h>

/*
 * This program reads lines and prints count of '()'
 */

int main() {
    int c, count, pair;
    count = pair = 0;
    while ((c = getchar()) != EOF) {
        if (c == '(') {
            pair = 1;
        } else if (pair && c == ')') {
            pair = 0;
            count++;
        } else if (c == '\n') {
            printf("Parentheses pairs count = %d\n", count);
            pair = count = 0;
        } else {
            pair = 0;
        }
    }
}
