class Solution:
    def jump(self, nums: List[int]) -> int:
        n,cnt,far,c = len(nums),0,0,0
        for i in range(n-1):
            far = max(far,i+nums[i])
            if i==c:
                cnt += 1
                c = far
        return cnt
