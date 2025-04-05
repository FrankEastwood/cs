#include <assert.h>

int A(int x) {
    return !~x;
}

int B(int x) {
    return !x;
}

int C(int x) {
    return A(x | ~0xFF);
    // return A(((unsigned char*) x & 0xFF)[sizeof(int) - 1]);
}

int D (int x) {
    return B(x >> (sizeof(int) - 1 << 3) & 0xFF);
}

int main() {
    int a = ~0;
    int b = 0;
    int c = 0x12FF;
    assert(A(a));
    assert(B(b));
    assert(C(c));
    assert(D(c));
    return 0;
}