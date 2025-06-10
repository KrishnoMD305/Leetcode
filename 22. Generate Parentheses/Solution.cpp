class Solution {
public:
    void b_t(int op, int cl, string s, vector<string> &res){
        if(op==0 && cl==0){
            res.push_back(s);
            return;
        }
        if(op>0){
            b_t(op-1,cl,s+'(',res);
        }
        if(op<cl){
            b_t(op,cl-1,s+')',res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        b_t(n,n,"",res);
        return res;
    }
};
