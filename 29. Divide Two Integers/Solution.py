# Krishno_MD_KUET_CSE
class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        MAX, MIN = 2**31-1,-2**31
        if dividend==MIN and divisor==-1:
            return MAX
        divis = abs(divisor)
        divid = abs(dividend)
        quotent = 0
        while divid>=divis:
            temp,multiple = divis,1
            while divid >= (temp<<1):
                temp <<= 1
                multiple <<= 1
            divid -= temp
            quotent += multiple
        if divisor<0 and dividend<0:
            return quotent
        elif divisor<0 or dividend<0:
            return -quotent
        else:
            return quotent
