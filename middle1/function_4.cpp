#include "middle.h"

int itc_rev_oct_num(long long number) {
    long long a = itc_oct_num(number);
    long long b = itc_rev_num(a);
    return b;
}
