#include <assert.h>

unsigned replace_byte (unsigned x, int i, unsigned char b) {
    unsigned mask = 0xFF;
    unsigned replace = (unsigned) b;
    return x & ~(mask << i * 8) | (replace << i * 8);
}

int main () {
    assert(replace_byte(0x12345678, 2, 0xAB) == 0x12AB5678);
    assert(replace_byte(0x12345678, 0, 0xAB) == 0x123456AB);
    return 0;
}