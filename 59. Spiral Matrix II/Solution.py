class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        result = [[0]*n for i in range(n)]
        l,r,top,bot,x = 0,n-1,0,n-1,1
        while l<=r and top<=bot:
            for i in range(l,r+1):
                result[top][i] = x
                x += 1
            top += 1
            for i in range(top,bot+1):
                result[i][r] = x
                x += 1
            r -= 1
            if top<=bot:
                for i in range(r,l-1,-1):
                    result[bot][i] = x
                    x += 1
                bot -= 1
            if i<=r:
                for i in range(bot,top-1,-1):
                    result[i][l] = x
                    x += 1
                l += 1
        return result
