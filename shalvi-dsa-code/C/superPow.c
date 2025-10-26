int modPow(int base, int exponent, int modulus) {
    int result = 1;
    base %= modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent >>= 1;
        base = (base * base) % modulus;
    }
    return result;
}

int superPow(int a, int* b, int bSize) {
    int result = 1;
    for (int i = 0; i < bSize; ++i) {
        result = modPow(result, 10, 1337) * modPow(a, b[i], 1337) % 1337;
    }
    return result;
}