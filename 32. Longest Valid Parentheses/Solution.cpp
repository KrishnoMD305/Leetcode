class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0, right=0, m=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                left++;
            }else{
                right++;
            }
            if(left==right){
                m = max(m,left*2);
            }else if(left<right){
                left = 0;
                right = 0;
            }
        }
        right = 0;
        left = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='('){
                left++;
            }else{
                right++;
            }
            if(left==right){
                m = max(m,left*2);
            }else if(left>right){
                left = 0;
                right = 0;
            }
        }
        return m;
    }
};
