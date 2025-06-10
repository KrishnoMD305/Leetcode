class Solution:
    def gen(self,strr: List[str],res: List[str],cur: str,ind: int)->None:
        if ind==len(strr):
            res.append(cur)
            return
        for i in strr[ind]:
            self.gen(strr,res,cur+i,ind+1)
    def letterCombinations(self, digits: str) -> List[str]:
        strr,res = [],[]
        for i in digits:
            if i=='2': strr.append("abc")
            if i=='3': strr.append("def")
            if i=='4': strr.append("ghi")
            if i=='5': strr.append("jkl")
            if i=='6': strr.append("mno")
            if i=='7': strr.append("pqrs")
            if i=='8': strr.append("tuv")
            if i=='9': strr.append("wxyz")
        if len(strr)==0: return res
        self.gen(strr,res,"",0)
        return res
