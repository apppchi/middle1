#include "middle.h"

int itc_rev_oct_num(long long number) {
    long long a = itc_oct_num(number);
    long long b = itc_rev_ch(a);
    return b;
}

int itc_rev_ch(long long number) {
    long long c = 0;
    if (number < 0)
        number = number * -1;
    while (number > 0) {
        c = c * 10 + number % 10;
        number = number / 10;
    }
