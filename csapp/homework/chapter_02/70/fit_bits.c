#include <assert.h>

int fits_bits(int x, int n) {
    /* assume 1 <= n <= w */
    int w = sizeof(int) << 3;
    int offset = w - n;
    return (x << offset >> offset) == x;
}

void main() {
    assert(!fits_bits(0xFF, 8));
}