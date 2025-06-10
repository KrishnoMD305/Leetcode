class Solution:
    def titleToNumber(self, col: str) -> int:
        return reduce(lambda x,y:26*x+y,[(ord(i)-ord('A')+1) for i in col])
