class Solution:
    def isPalindrome(self, n: int) -> bool:

        og = n
        rev = 0

        while n > 0:
            ld = n % 10
            n = n // 10
            rev = rev * 10 + ld

        return rev == og