#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Allocate space for at most digitsSize + 1 elements (in case of carry)
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    
    // Copy original digits into result array
    memcpy(result, digits, digitsSize * sizeof(int));
    
    // Start adding one from the last digit
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (result[i] < 9) {
            result[i] += 1;
            *returnSize = digitsSize;
            return result;
        } else {
            result[i] = 0;
        }
    }
    
    // If all digits were 9, e.g., [9,9,9] -> [1,0,0,0]
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return result;
}
