class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        if(n<=1) return "";
        vector<int> lps(n,0);
        int i = 1, j = 0;
        while(i<n){
            if(s[i]==s[j]){
                lps[i++] = ++j;
            }else{
                if(j != 0){
                    j = lps[j-1];
                }else{
                    lps[i++] = 0;
                }
            }
        }
        return s.substr(0,lps[n-1]);
    }
};
