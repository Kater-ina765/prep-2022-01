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

// TODO(kater): Implement `power of` function
/*
int custom_pow(int base, int power) {
    return 0;
}
*/
