class Solution:
    def getSum(self, a: int, b: int) -> int:
        MASK = 0xFFFFFFFF       # 32-bit mask
        MAX_INT = 0x7FFFFFFF    # Max positive int for 32-bit

        while b != 0:
            carry = a & b
            a = (a ^ b) & MASK  # Ensure a stays within 32 bits
            b = (carry << 1) & MASK

        # If a is greater than MAX_INT, it means it's a negative number
        return a if a <= MAX_INT else ~(a ^ MASK)
