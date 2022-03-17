#include "include.h"
#include "modul_recursion.h"

int recursion(int num) {
    if (num < 1) {
        if (num+1 == 1) {
            printf("%i %i", num+1, num);
            return 1;
        }
        recursion(num+1);
        printf(" %i", num);
        return num;
    } else {
      if (num == 1) {
        printf("%i", num);
        return 1;
        }
     recursion(num-1);
     printf(" %i", num);
     return num;
    }
}
