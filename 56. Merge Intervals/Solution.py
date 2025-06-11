class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        result = []
        if not intervals:
            return result
        intervals.sort()
        f1,l1 = intervals[0][0],intervals[0][1]
        for i in range(1,len(intervals)):
            f,l = intervals[i][0],intervals[i][1]
            if f<=l1:
                l1 = max(l,l1)
            else:
                result.append([f1,l1])
                f1,l1 = f,l
        result.append([f1,l1])
        return result
