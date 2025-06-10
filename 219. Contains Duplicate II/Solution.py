class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        ind = {}
        for i,v in enumerate(nums):
            if v in ind:
                if i-ind[v]<=k:
                    return True
            ind[v] = i
        return False
