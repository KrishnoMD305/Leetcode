class Solution:
    def longestValidParentheses(self, s: str) -> int:
        def scan(s,o,c):
            left=right=m=0
            for i in s:
                left += i==o
                right += i==c
                if(left==right):
                    m = max(m,left*2)
                elif right>left:
                    right=left=0
            return m
        return max(scan(s,'(',')'),scan(reversed(s),')','('))
