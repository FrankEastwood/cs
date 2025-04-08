#include <assert.h>

int odd_ones(unsigned x) {
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    x &= 0x1;
    return x;
}

void main() {
    assert(odd_ones(0b11110000111100001111000011110001));
}