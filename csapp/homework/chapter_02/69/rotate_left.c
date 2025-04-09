#include <assert.h>

unsigned rotate_left(unsigned x, int n) {
    /* Assume 0 <= n < w */
    int w = sizeof(x) << 3;
    /* answer is x << n | x >> (w - n - 1) >> 1*/
    return (x << n) | (x >> (- (n && 1) & (w - n))); 
}

void main() {
    assert(rotate_left(0x12345678, 0) == 0x12345678);
    assert(rotate_left(0x12345678, 4) == 0x23456781);
    assert(rotate_left(0x12345678, 20) == 0x67812345);
}

