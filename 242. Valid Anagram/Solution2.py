class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        cnt = [0]*26
        for i,j in zip(s,t):
            cnt[ord(i)-ord('a')] += 1
            cnt[ord(j)-ord('a')] -= 1
        return all(i==0 for i in cnt)
