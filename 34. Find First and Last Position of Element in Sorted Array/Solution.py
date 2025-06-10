class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        valid,tar_cnt = False, 0
        for i in nums:
            if i==target:
                valid = True
                tar_cnt += 1
        if not valid:
            return [-1,-1]
        else:
            if tar_cnt==1:
                for i,n in enumerate(nums):
                    if n==target:
                        return [i,i]
            start,end = -1, -1
            for i,n in enumerate(nums):
                if n==target:
                    if start==-1:
                        start=i
                    else:
                        end=i
            return [start,end]
