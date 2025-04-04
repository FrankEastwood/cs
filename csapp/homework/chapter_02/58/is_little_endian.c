#include <stdio.h>

unsigned short is_little_endian() {
    unsigned short s_val = 1;
    unsigned char* p = (unsigned char *)&s_val;
    return (unsigned short)(p[0]);
}

void main() {
    printf("result is %d \n", is_little_endian());
}