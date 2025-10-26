#include <stdio.h>

int getSum(int a, int b) {
    unsigned int carry;
    while (b != 0) {
        // Calculate carry using AND operation
        carry = a & b;

        // XOR operation gives the sum of bits
        a = a ^ b;

        // Left shift carry by 1 bit
        b = carry << 1;
    }
    return a;
}