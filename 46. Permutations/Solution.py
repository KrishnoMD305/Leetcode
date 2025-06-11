class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def perm(a:int,re:List[List[int]])->None:
            if len(nums)==a:
                re.append(nums[:])
                return
            for i in range(a,len(nums)):
                nums[a],nums[i]=nums[i],nums[a]
                perm(a+1,re)
                nums[a],nums[i]=nums[i],nums[a]
        re = []
        perm(0,re)
        return re
