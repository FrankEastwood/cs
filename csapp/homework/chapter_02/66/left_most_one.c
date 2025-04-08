#include <assert.h>

int left_most_one(unsigned x) {
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x = (x >> 1) + (x && 1);
    return x ;
}

void main () {
    assert(left_most_one(0xFF00) == 0x8000);
    assert(left_most_one(0x6600) == 0x4000);
}