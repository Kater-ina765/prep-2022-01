#include "include.h"
#include "utils.h"

size_t timer_from(unsigned short from) {
    size_t counter = 0;
    for (int i = from; i >= 0; --i) {
        ++counter;
        printf("%d", i);
        if (i != 0) {
            printf(" ");
        }
    }
    return counter;
}

int custom_pow(int base, int power) {
    int buf_base = base;
    if (power == 0) {
        return 1;
    }    else  {
     for (int i=1; i < power; i++) {
        buf_base = buf_base*base;
        }
    return buf_base;
    }
}

