from typing import List

class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        MOD = 1337

        def mod_pow(a: int, k: int) -> int:
            # Compute a^k % MOD
            a %= MOD
            result = 1
            for _ in range(k):
                result = (result * a) % MOD
            return result

        if not b:
            return 1

        last_digit = b.pop()
        part1 = mod_pow(self.superPow(a, b), 10)
        part2 = mod_pow(a, last_digit)

        return (part1 * part2) % MOD