#include <stdio.h>

int get_and_zero(int* number) {
    int input = *number;
    *number = 0;
    return input;
}

int put_sum(int* num1, int* num2, int* num3) {
    int sum;
    sum = *num1 + *num2 + *num3;
    *num1 = *num2 = *num3 = sum;
    return sum;
}

int spaces_count(const char* str) {
    int count, i;
    count = i = 0;
    char letter;
    while ((letter = str[i])) {
        if (letter == ' ') {
            count++;
        }
        i++;
    }
    return count;
}

int spaces_count_recursion(const char* str) {
    if (*str == ' ') {
        return 1 + spaces_count_recursion(++str);
    } else if (*str == 0) {
        return 0;
    } else {
        return spaces_count_recursion(++str);
    }
}

int main() {
    char str[] =
        "       xtyumk w56uj ;iu piopl   98867 7y 2567uj#I*%$&^Y3ui68l "
        "8o78436873 89o87p-+_&*)(O*)9op;*(L&$K^JR )    ";
    int count;
    count = spaces_count(str);
    printf("spaces count = %d\n", count);
    count = spaces_count_recursion(str);
    printf("spaces count recursion = %d\n", count);
}
