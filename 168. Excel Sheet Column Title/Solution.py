class Solution:
    def convertToTitle(self, col: int) -> str:
        tit = ""
        while col>0:
            col -= 1
            tit = tit + chr((col%26)+ord('A'))
            col //= 26
        return tit[::-1]
        
