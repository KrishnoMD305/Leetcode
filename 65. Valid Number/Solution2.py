class Solution:
    def isNumber(self, s: str) -> bool:
        n = len(s)
        j,num,dot,ex = 0,False,False,False
        if s[0]=='+' or s[0]=='-':
            j+=1
        i = j
        while i<n:
            if s[i].isdigit():
                num = True
            elif s[i]=='.':
                if dot or ex:
                    return False
                dot = True
            elif s[i]=='e' or s[i]=='E':
                if ex or not num:
                    return False
                ex = True
                num = False
                if i+1<n and (s[i+1]=='+' or s[i+1]=='-'):
                    i+=1
            else:
                return False
            i += 1
        return num
