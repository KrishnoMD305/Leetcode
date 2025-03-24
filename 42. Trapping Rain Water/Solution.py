class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        l,r,lmax,rmax,res = 0, n-1, height[0], height[n-1], 0
        while l<r:
            if lmax<rmax:
                l += 1
                lmax = max(lmax, height[l])
                res += lmax - height[l]
            else:
                r -= 1
                rmax = max(rmax,height[r])
                res += rmax - height[r]
        return res
