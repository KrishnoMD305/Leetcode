class Solution:
    def generator(self,i:int, arr:List[int], target:int, ans:List[List[int]], temp:List[int])-> None:
        if i==len(arr):
            if target==0:
                ans.append(temp[:])
            return
        if arr[i]<=target:
            temp.append(arr[i])
            self.generator(i,arr,target-arr[i],ans,temp)
            temp.pop()
        self.generator(i+1,arr,target,ans,temp)

    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []
        te = []
        self.generator(0,candidates,target,result,te)
        return result
