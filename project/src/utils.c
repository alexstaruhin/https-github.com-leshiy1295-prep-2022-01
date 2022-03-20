#include <iostream>

#include "utils.h"

size_t timer_from(unsigned char from) {
    size_t counter;
    for (unsigned char i = from; i >= 0; --i) {
        ++counter;
        printf("%d\n", i);
    }
    return counter;
}
int custom_pow(int base, int power) {
   int res=1;
   for (int i = 0; i < power; i++) {
        res*=base;
    }
   return res;
};
