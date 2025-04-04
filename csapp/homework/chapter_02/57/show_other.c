#include "show_bytes.c"

void show_short(short x) {
    printf("show_short: ");
    show_bytes((byte_pointer)&x, sizeof(x));
}

void show_long(long x) {
    printf("show_long: ");
    show_bytes((byte_pointer)&x, sizeof(x));
}

void show_double(double x) {
    printf("show_double: ");
    show_bytes((byte_pointer)&x, sizeof(double));   
}

void test_show_other() {
    short sval = 12345;
    show_short(sval);
    long lval = 12345;
    show_long(lval);
    double dval = 12345;
    show_double(dval);
}

void main() {
    test_show_other();
}