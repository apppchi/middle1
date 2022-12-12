#include "middle.h"

int itc_min_num(long long number){
    int c = 0;
    int min1 = 10;
    if (number == 0)
        return 0;
    if (number < 0)
        number = number * -1;
    while (number > 0){
        c = number % 10;
        if (c < min1)
            min1 = c;
	    number = number / 10;
    }
	return min1;
}

int itc_rev_num(long long number) {
    int c = 0;
	if (number < 0)
        number = number * -1;
    while (number > 0) {
        c = c * 10 + number % 10;
        number = number / 10;
    }
    return c;
}

int itc_null_count(long long number){
    int c;
    int kol = 0;
    if (number == 0)
        return 1;
    if (number < 0)
        number = number * -1;
    while (number > 0){
        c = number % 10;
        if(c == 0)
            kol++;
        number = number / 10;
    }
    return kol;
 }

bool itc_mirror_num(long long number) {
    if (number < 0)
        number = number * -1;
    int a = itc_rev_num(number);
    if (a == number)
        return 1;
    return 0;
}

int itc_mirror_count(long long number){
    int a = 0;
    if (number < 0)
        number = number * -1;
    for (int i = 1; i <= number; i++)
        if (itc_mirror_num(i) == 1)
            a++;
    return a;
}
