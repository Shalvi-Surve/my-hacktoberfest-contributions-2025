#include <stdio.h>

void helper(char* s, int left, int right) {
    if (left >= right) return;

    // Swap characters
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    // Recursive call
    helper(s, left + 1, right - 1);
}

void reverseString(char* s, int sSize) {
    helper(s, 0, sSize - 1);
}
