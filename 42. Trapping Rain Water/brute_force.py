class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        max_left = []
        l = height[0]
        max_left.append(l)
        for i in range(1,n):
            l = max(l,height[i])
            max_left.append(l)
        r = height[n-1]
        max_right = [0]*n
        max_right[n-1] = r
        for i in range(n-2,-1,-1):
            r = max(r,height[i])
            max_right[i] = r
        d = 0
        for i in range(n):
            f = min(max_left[i],max_right[i]) - height[i]
            if f>0:
                d += f
        return d
