class Solution:
    def canJump(self, nums: List[int]) -> bool:
        maxx = 0
        for i,val in enumerate(nums):
            if i>maxx: return False
            maxx = max(maxx,i+val)
        return True
