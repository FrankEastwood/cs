#include <assert.h>

int lower_one_mask(int n) {
    /* Assume 1 <= n <= w */
    // return 2 * (1 << (n - 1)) - 1;
    return (1 << (n -1)) + ((1 << (n -1)) -1);
}

void main() {
    // assert(lower_one_mask(6) == 0x3F);
    // assert(lower_one_mask(17) == 0x1FFFF);
    assert(lower_one_mask(32) == 0xFFFFFFFF);
}