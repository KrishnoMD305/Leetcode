class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        a,b,p = m+n-2,m-1,1
        for i in range(1,b+1):
            p *= (a-b+i)
            p //= i
        return p
