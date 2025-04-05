#include <assert.h>
#include <stdio.h>

unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    unsigned mask = 1 << k - 1;
    return xsra & mask;
}

int sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int mask = 1 << k - 1;
    int flag = !(~(x & (1 << (sizeof(int) << 3) - 1)));
    printf("flag is %d", flag);
    return xsrl & (flag * ~ mask);
}

void main() {
    assert(sra(-1, 1) == -1);
}