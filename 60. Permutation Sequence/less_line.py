class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        fact = factorial(n-1)
        num = list(range(1,n+1))
        k -= 1
        ans = ""
        while num:
            ans += str(num.pop(k//fact))
            k %= fact
            fact //= len(num) if num else 1
        return ans
