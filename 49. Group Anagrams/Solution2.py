class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ang = defaultdict(list)
        for s in strs:
            
            k = ''.join(sorted(s))
            ang[k].append(s)
        return list(ang.values())
