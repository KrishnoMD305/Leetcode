class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        nums.sort()
        r=[]
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                if not r or r[-1] != nums[i]:
                    r.append(nums[i])
        return r
