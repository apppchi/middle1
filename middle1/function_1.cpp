#include "middle.h"

void itc_num_print(int number){
    cout << number;
}

int itc_len_num(long long number){
    int c = 0;
    if (number < 0)
        number = number * -1;
    while (number > 0){
        c++;
        number = number / 10;
    }
    return c;
}

int itc_sum_num(long long number){
    if (number < 0)
        number = number * -1;
    int c = 0;
    while (number > 0){
        c = c + number % 10;
        number = number / 10;
    }
    return c;
}

long long itc_multi_num(long long number){
    if (number < 0)
        number = number * -1;
    if (number == 0)
        return 0;
    int c = 1;
    while (number > 0){
        c = c * (number % 10);
        number = number / 10;
    }
    return c;
}

int itc_max_num(long long number){
    int max1,c;
    max1 = -1;
    c = 0;
    if (number == 0)
        return 0;
    if (number < 0)
        number = number * -1;
    while (number > 0){
        c = number % 10;
        if (c > max1)
            max1 = c;
	    number = number/10;
    }
	return max1;
}
