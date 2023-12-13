#include <stdio.h>

int get_and_zero(int* number) {
    int input = *number;
    *number = 0;
    return input;
}

int main() {
    int a, b;
    a = -26548;
    b = get_and_zero(&a);
    printf("a = %d, b = %d\n", a, b);
}
