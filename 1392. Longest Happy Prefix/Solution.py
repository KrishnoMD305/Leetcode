class Solution:
    def longestPrefix(self, s: str) -> str:
        n = len(s)
        if n<=1:
            return ""
        lps = [0]*n
        i,j = 1,0
        while i<n:
            if s[i]==s[j]:
                j+=1
                lps[i] = j
                i += 1
            else:
                if j != 0:
                    j = lps[j-1]
                else:
                    lps[i] = 0
                    i += 1
        return s[:lps[-1]]
