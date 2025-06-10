class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        ans = []
        m,n = len(words[0]), len(words)
        freq = {}
        for i in words: 
            freq[i] = freq.get(i,0)+1
        for i in range(m):
            lft,rt,cnt = i,i,0
            tmp = {}
            while rt+m<=len(s):
                ss = s[rt:rt+m]
                rt += m
                if ss in freq:
                    tmp[ss] =tmp.get(ss,0) +1
                    cnt +=1
                    while tmp[ss]>freq[ss]:
                        ww = s[lft:lft+m]
                        tmp[ww] -= 1
                        cnt -= 1
                        lft += m
                    if cnt==n: ans.append(lft)
                else:
                    tmp.clear()
                    cnt = 0
                    lft = rt
        return ans
