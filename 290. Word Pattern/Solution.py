class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(pattern) != len(words): return False
        char_str,str_char = {}, {}
        for i in range(len(pattern)):
            chr,sr = pattern[i],words[i]
            if chr in char_str:
                if char_str[chr] != sr: return False
            else: char_str[chr] = sr
            if sr in str_char:
                if str_char[sr] != chr: return False
            else: str_char[sr] = chr
        return True
