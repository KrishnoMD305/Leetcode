class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        r = []
        s_row,s_col,e_row,e_col = 0,0,len(matrix)-1,len(matrix[0])-1
        while s_row<=e_row and s_col<=e_col:
            for i in range(s_col,e_col+1):
                r.append(matrix[s_row][i])
            s_row += 1
            for i in range(s_row,e_row+1):
                r.append(matrix[i][e_col])
            e_col -= 1
            if s_row<=e_row:
                for i in range(e_col,s_col-1,-1):
                    r.append(matrix[e_row][i])
                e_row -= 1
            if s_col<=e_col:
                for i in range(e_row,s_row-1,-1):
                    r.append(matrix[i][s_col])
                s_col += 1
        return r
