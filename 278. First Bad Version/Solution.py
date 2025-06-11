# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:
# 1660452318
class Solution:
    def firstBadVersion(self, n: int) -> int:
        start,end = 1,n
        while start<end:
            mid = (start+end)//2
            if not isBadVersion(mid):
                start = mid + 1
            else:
                end = mid
        return end
