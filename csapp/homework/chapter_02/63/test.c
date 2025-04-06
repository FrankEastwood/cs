#include <assert.h>

/* my answer*/
unsigned _srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    int width = sizeof(int) << 3;
    unsigned mask = (1 << (width - k)) - 1;
    return xsra & mask;
}

int _sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int width = sizeof(int) << 3;
    int mask = (1 << (width - k)) - 1;
    int flag = !!(x & (1 << width - 1));
    return xsrl | (flag * ~ mask);
}

/* book answer*/
unsigned srl(unsigned x, int k) {
    unsigned xsra = (int) x >> k;
    int w = sizeof(int) << 3;
    int mask = (int) -1 << (w - k);
    return xsra & ~mask;
}

int sra(int x, int k) {
    int xsrl = (unsigned) x >> k;
    int w = sizeof(int) << 3;
    int mask = (int) -1 << (w - k);
    mask &= !(x & 1<<(w - 1)) - 1;
    return xsrl | mask;
}


void main() {
    /* -1 is useful when it was used as mask*/
    assert(srl(8, 1) == 4);
    assert(sra(-1, 1) == -1);
    assert(sra(8, 2) == 2);
}