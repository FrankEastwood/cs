#include <assert.h>

int any_odd_bits_one(int x) {
    /* assume w = 32*/
    int mask = 0xAAAAAAAA;
    x = x & mask;
    return 1 - !x;
}

void main() {
    assert(!any_odd_bits_one(0));
    assert(!any_odd_bits_one(0x55555555));
}