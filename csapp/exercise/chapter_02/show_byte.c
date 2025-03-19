#include <stdio.h>

typedef unsigned char * byte_point;

void show_bytes(byte_point start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_point) &x, sizeof(x));
}

void show_float(float x) {
    show_bytes((byte_point) &x, sizeof(x));
}

void show_pointer(void *x) {
    show_bytes((byte_point) &x, sizeof(x));
}