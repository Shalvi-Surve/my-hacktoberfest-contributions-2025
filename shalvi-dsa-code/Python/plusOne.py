class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        n = len(digits)
    
        # Start from the end of the list
        for i in range(n - 1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits
            digits[i] = 0  # set current digit to 0 and carry the 1

        # If all digits were 9, we need to add 1 at the beginning
        return [1] + [0] * n
