class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        def genrt(start:int,target:int,candi:[List],temp:[List],res:[List[List]]):
            if target==0:
                res.append(temp[:])
                return
            for i in range(start,len(candi)):
                if i>start and candi[i]==candi[i-1]:
                    continue
                if candi[i]>target:
                    break
                temp.append(candi[i])
                genrt(i+1,target-candi[i],candi,temp,res)
                temp.pop()
        re = []
        candidates.sort()
        genrt(0,target,candidates,[],re)
        return re
