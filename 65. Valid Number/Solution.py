class Solution:
    def isNumber(self, s: str) -> bool:
        n,i,num,dot,ex = len(s), (1 if s[0] in "+-" else 0), False,False,False
        while i<n:
            if s[i].isdigit():
                num = True
            elif s[i]=='.' and not dot and not ex:
                dot = True
            elif s[i] in "eE" and not ex and num:
                ex,num = True,False
                i += (1 if i+1<n and s[i+1] in "+-" else 0)
            else:
                return False
            i += 1
        return num
