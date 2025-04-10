#include <assert.h>
#include <limits.h>

int tsub_ok (int x, int y) {
    int w = sizeof(int) << 3;
    return !(((x ^ y) & (x ^ (x - y))) >> (w - 1)); 
}

void main () {
    assert(!tsub_ok(1, 0x80000000));
    assert(!tsub_ok(0x00, INT_MIN));
    assert(tsub_ok(0x00, 0x00));
    assert(!tsub_ok(INT_MAX, -1));
    assert(!tsub_ok(INT_MIN, 1));
}

