import bisect
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row = [r[0] for r in matrix]
        id = bisect.bisect_right(row,target) - 1
        if id == -1: return False
        v = bisect.bisect_left(matrix[id],target)
        return v<len(matrix[id]) and matrix[id][v]==target

        
