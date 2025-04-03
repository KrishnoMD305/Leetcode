class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1=="0" or num2=="0":
            return "0"

        pro = [0] * (len(num1)+len(num2))

        for i in range(len(num1)-1,-1,-1):
            for j in range(len(num2)-1,-1,-1):
                multi = int(num1[i]) * int(num2[j]) + pro[i+j+1]
                pro[i+j+1],pro[i+j] = multi%10, pro[i+j] + multi//10
                
        return "".join(map(str,pro)).lstrip("0")
