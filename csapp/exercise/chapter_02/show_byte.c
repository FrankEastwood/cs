#include <stdio.h>

typedef unsigned char * byte_point;

void show_bytes(byte_point start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_bytes_int(unsigned int *start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_bytes_float(float *start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_bytes_point(unsigned char* start, size_t len) {
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

void show_int_raw(int x) {
    show_bytes_int((unsigned int *)&x, sizeof(unsigned int));
}

void show_float_raw(float x) {
    show_bytes_float(&x, sizeof(x));
}

void show_pointer_raw(void *x) {
    show_bytes_point((unsigned char *)&x, sizeof(x));
}

int main() {
    int ival = 12345;
    float fval = (float)ival;
    int *pval = &ival;
    show_int(ival);
    show_int_raw(ival);
    // show_float(fval);
    // show_float_raw(fval);
    // show_pointer(pval);
    // show_pointer_raw(pval);
    return 0;
}