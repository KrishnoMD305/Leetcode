class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        m = 1
        nums.sort()
        for i in nums:
            if i>0:
                if i==m:
                    m+=1
                elif m<i:
                    break
        return m
