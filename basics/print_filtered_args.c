#include <stdio.h>

/*
 * This program prints it's command line arguments which start with '-'.
 */

int main(int argc, char **argv) {
    int i;
    for (i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            printf("%s ", argv[i]);
        }
    }
    putchar('\n');
    return 0;
}
