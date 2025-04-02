class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        fact = 1
        num = []
        for i in range(1,n):
            num.append(i)
            fact = fact*i
        num.append(n)
        k -= 1
        ans = ""
        while True:
            ans += str(num[k//fact])
            num.pop(k//fact)
            if len(num) == 0:
                break
            k = k % fact
            fact = fact // len(num)
        return ans
