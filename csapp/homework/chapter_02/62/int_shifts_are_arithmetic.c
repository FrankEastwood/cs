#include <assert.h>

int int_shifts_are_arithmetic() {
    return (-1 >> 1) == -1;
}

void main() {
    assert(int_shifts_are_arithmetic());
}