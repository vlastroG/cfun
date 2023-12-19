#include <stdio.h>

/*
 * This program reads lines and writes doesn line have parentheses balance.
 * If there is balence program prints YES, else prints NO.
 */

int main() {
    int c, parenthesis_score;
    parenthesis_score = 0;
    while ((c = getchar()) != EOF) {
        if (c == '(') {
            if (parenthesis_score >= 0) {
                parenthesis_score++;
            }
        } else if (c == ')') {
            if (parenthesis_score >= 0) {
                parenthesis_score--;
            }
        } else if (c == '\n') {
            if (parenthesis_score == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
            parenthesis_score = 0;
        }
    }
    return 0;
}
