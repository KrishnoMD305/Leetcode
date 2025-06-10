from typing import List
class Solution:
    def b_t(self,op:int ,cl:int ,s:str, res: List[str]) -> None:
        if op==0 and cl==0:
            res.append(s)
            return
        if op>0:
            self.b_t(op-1,cl,s+'(',res)
        if op<cl:
            self.b_t(op,cl-1,s+')',res)

    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        s=""
        self.b_t(n,n,s,res)
        return res
