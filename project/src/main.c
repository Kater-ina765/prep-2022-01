#include "include.h"
#include "utils.h"
#include "modul_prime.h"
#include "modul_recursion.h"

#define ERR_NEG_NUM 0
#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3
#define TST_NEW_CASE    4



/* NOTE(stitaevskiy):
 * We use `atoi` function just for simplification and code reducing.
 * This function doesn't report conversation errors.
 * For safety program we recommend using `strtol` and its analogs.
 * (See `man atoi` and `man strtol` for more info).
 *
 * const char str_num[] = "1234";
 * char* end = NULL;
 * int val = (int) strtol(str_num, &end, 0);
 * if (end != '\0') {
 *     //ERROR
 * }
 *
 * */

int main(int argc, const char** argv) {
    if (argc < 3) {
        return ERR_ARGS_COUNT;
    }

    int Test_case = atoi(argv[1]);
    const char* data;
    data = argv[2];

    switch (Test_case) {
        case TST_FOO_FIX: {
            int to = atoi(data);
            if (to < 0) {
                printf("0");
                return ERR_NEG_NUM;
            }
            size_t ticks_count = timer_from(to);
            printf("\n%zu", ticks_count);
            break;
        }
        case TST_FOO_IMPL: {
            if (argc == 4) {
                 int base = atoi(data);
                 int pow =  atoi(argv[3]);
                 int res = custom_pow(base, pow);

                 printf("%i\n", res);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        case TST_MOD_IMPL: {
             int num = atoi(data);
             if (prime_numbers(num) == 0) printf("0");
             else
              printf("1");
             break;
        }
        case TST_NEW_CASE: {
            int num = atoi(data);
            recursion(num);
            break;
        }
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
