class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        def backtrack(nums:List[int],used:List[bool],current:List[int],result:List[List[int]]) -> None:
            if len(current)==len(nums):
                result.append(current[:])
                return
            for i in range(len(nums)):
                if used[i]:
                    continue
                if i>0 and nums[i]==nums[i-1] and not used[i-1]:
                    continue
                used[i] = True
                current.append(nums[i])
                backtrack(nums,used,current,result)
                current.pop()
                used[i] = False
        result,current,used = [],[],[False]*len(nums)
        nums.sort()
        backtrack(nums,used,current,result)
        return result
