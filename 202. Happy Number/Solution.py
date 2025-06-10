class Solution:
    def isHappy(self, n: int) -> bool:
        s = set()
        while n!=1 and not (n in s):
            s.add(n)
            summ = 0
            while n!=0:
                d = n%10
                summ += d*d
                n //= 10
            n = summ
        if n==1:
            return True
        else:
            return False
