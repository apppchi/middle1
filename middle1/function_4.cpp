#include "middle.h"

int itc_rev_oct_num(long long number) {
    int a = itc_oct_num(number);
    int b = itc_rev_num(a);
    return b;
}
