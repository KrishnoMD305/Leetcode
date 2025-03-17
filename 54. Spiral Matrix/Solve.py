class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        r = []
        while matrix:
            r += matrix.pop(0)
            if matrix and matrix[0]:
                for row in matrix:
                    r.append(row.pop())
            if matrix:
                r += matrix.pop()[::-1]
            if matrix and matrix[0]:
                for row in matrix[::-1]:
                    r.append(row.pop(0))
        return r
            
                
