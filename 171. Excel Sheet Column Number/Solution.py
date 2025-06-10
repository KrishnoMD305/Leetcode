class Solution:
    def titleToNumber(self, col: str) -> int:
        c = 0
        for i in col:
            dig = ord(i)-ord('A')+1
            c = 26*c + dig
        return c
