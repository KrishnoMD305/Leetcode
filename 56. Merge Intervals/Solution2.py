class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        if not intervals:
            return []

        intervals.sort()
        result = [intervals[0]]

        for f,l in intervals[1:]:
            if f<=result[-1][1]:
                result[-1][1] = max(result[-1][1],l)
            else:
                result.append([f,l])
        return result
