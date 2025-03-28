class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        int i = 0;
        if(s[0]=='+' || s[0]=='-') i++;
        bool num = false, dot = false, ex = false;
        for(; i<n; i++){
            if(isdigit(s[i])){
                num = true;
            }else if(s[i]=='.'){
                if(dot || ex) return false;
                dot = true;
            }else if(s[i]=='e' || s[i]=='E'){
                if(ex || !num) return false;
                ex = true;
                num = false;
                if(i+1<n && (s[i+1]=='+' || s[i+1]=='-')) i++;
            }else{
                return false;
            }
        }
        return num;
    }
};
