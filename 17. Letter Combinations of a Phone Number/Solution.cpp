class Solution {
public:
    void gen(vector<string> &str, vector<string> &res, string current, int ind){
        if(ind==str.size()){
            res.push_back(current);
            return;
        }
        for(char chh : str[ind]){
            gen(str,res,current+chh,ind+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> str,res;
        for(char ch : digits){
            if(ch=='2'){str.push_back("abc");}
            if(ch=='3'){str.push_back("def");}
            if(ch=='4'){str.push_back("ghi");}
            if(ch=='5'){str.push_back("jkl");}
            if(ch=='6'){str.push_back("mno");}
            if(ch=='7'){str.push_back("pqrs");}
            if(ch=='8'){str.push_back("tuv");}
            if(ch=='9'){str.push_back("wxyz");}
        }
        if(str.size()==0){
            return res;
        }
        gen(str,res,"",0);
        return res;
    }
};
