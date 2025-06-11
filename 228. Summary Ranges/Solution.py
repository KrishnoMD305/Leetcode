class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        ans,i = [],0
        while i<len(nums):
            l = i
            while i+1<len(nums) and nums[i]==nums[i+1]-1:
                i += 1
            if l==i:
                ans.append(f"{nums[l]}")
            else:
                ans.append(f"{nums[l]}->{nums[i]}")
            i += 1
        return ans
