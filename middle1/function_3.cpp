#include "middle.h"

int itc_second_max_num(long long number){
    if (number < 0)
        number = number * -1;
    if (number / 10 == 0)
        return -1;
    int max_1, max_2, ch;
    max_1 = -1;
    max_2 = -1;
    while (number > 0){
        ch = number % 10;
        if (ch >= max_1){
            max_2 = max_1;
            max_1 = ch;
        }
        else if (ch >= max_2)
            max_2 = ch;
        number = number / 10;
    }
    return max_2;
}

int itc_second_simple_max_num(long long number) {
    if (number < 0)
        number = number * -1;
    if (number / 10 == 0)
        return -1;
    int max_1, c, i;
    max_1 = itc_max_num(number);
    c = -1;
    while (number > 0) {
        i = number % 10;
        if (i > c && i != max_1)
            c = i;
        number = number / 10;
    }
    if (c == max_1)
        return -1;
    return c;
}

long long itc_bin_num(long long number) {
    int a, c;
    a = 0;
    c = 1;
    while (number > 0) {
        a = a + c * (number % 2);
        c = c * 10;
        number = number / 2;
    }
    return a;
}

long long itc_oct_num(long long number) {
    long long a, c;
    a = 0;
    c = 1;
    while (number > 0) {
        a = a + c * (number % 8);
        c = c * 10;
        number = number / 8;
    }
    return a;
}

int itc_rev_bin_num(long long number) {
    int a = itc_bin_num(number);
    int b = itc_rev_num(a);
    return b;
}
