#include <assert.h>

typedef unsigned packet_t;

int xbytes(packet_t word, int byte_num) {
    int w = sizeof(int) << 3;
    int offset = byte_num << 3;
    return (int) ((word >> offset) & 0xFF) << (w - offset) >> (w - offset); 
}

int xbytes_pro(packet_t word, int byte_num) {
    int max_num = 3;
    return (int) word << ((3 - byte_num) << 3) >> (max_num << 3);
}