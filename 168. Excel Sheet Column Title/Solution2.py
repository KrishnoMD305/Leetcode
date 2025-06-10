class Solution:
    def convertToTitle(self, col: int) -> str:
        return "" if col==0 else self.convertToTitle((col-1)//26) + chr(((col-1)%26)+ord('A'))
        
