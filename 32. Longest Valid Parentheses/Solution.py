class Solution:
    def longestValidParentheses(self, s: str) -> int:
        left,right,m = 0,0,0
        for i in s:
            if i == '(':
                left+=1
            else:
                right+=1
            if left == right:
                m = max(m,left*2)
            elif left<right:
                left = 0
                right = 0
        right,left = 0,0
        for i in reversed(s):
            if i == '(':
                left+=1
            else:
                right+=1
            if left == right:
                m = max(m,left*2)
            elif left>right:
                left = 0
                right = 0
        return m
