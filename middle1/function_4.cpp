#include "middle.h"

int itc_rev_oct_num(long long number) {
    long long a, c;
    cin >> number;
    a = 1;
    c = 0;
    while (number > 0) {
        c = c + a * (number % 10);
        a = a * 8;
        number = number / 10;
    }
    return c;
}

}

long long itc_rev_ch(long long number) {
    long long c = 0;
    if (number < 0)
        number = number * -1;
    while (number > 0) {
        c = c * 10 + number % 10;
        number = number / 10;
    }
    return c;
}
