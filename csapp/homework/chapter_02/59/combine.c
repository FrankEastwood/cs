#include <stdio.h>

void main() {
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    int z = (x & 0x000000FF) | (y & 0xFFFFFF00);
    printf("result is:");
    for(size_t i = 0; i < sizeof(int); i++) {
        printf(" %.2x", ((unsigned char*)&z)[i]);
    }
    printf("\n");
}