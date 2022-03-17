#include "include.h"
#include "modul_prime.h"

int prime_numbers(int num) {
    if (num > 1) {
    for (int i=2; i < num; i++) {
       if ((num % i) == 0) {
         return 0;
       }
    }
    return 1;
    }
     return 0;
}
