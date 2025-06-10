class Solution:
    def addBinary(self, a: str, b: str) -> str:
        r,i,j,carry = "",len(a)-1,len(b)-1,0
        while i>=0 or j>=0 or carry:
            sum = carry
            if i>=0:
                sum += ord(a[i])-ord('0')
                i -= 1
            if j>=0:
                sum += ord(b[j])-ord('0')
                j -= 1
            carry = sum//2
            r += str(int(sum%2))
        return r[::-1]
