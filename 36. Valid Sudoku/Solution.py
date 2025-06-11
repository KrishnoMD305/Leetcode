class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row = [[False]*9 for i in range(9)]
        col = [[False]*9 for i in range(9)]
        box = [[False]*9 for i in range(9)]
        for i in range(9):
            for j in range(9):
                ch = board[i][j]
                if ch=='.':
                    continue
                n = ord(ch)-ord('1')
                boxer = (i//3)*3 + (j//3)
                if row[i][n] or col[j][n] or box[boxer][n]:
                    return False
                row[i][n]=col[j][n]=box[boxer][n] = True
        return True
