class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int m = words[0].size();
        int n = words.size();
        vector<int> ans;
        unordered_map<string,int> freq;
        for(string s : words){
            freq[s] += 1;
        }
        for(int i=0; i<m; i++){
            int lft=i,rt=i,cnt=0;
            unordered_map<string,int> win;
            while(rt+m<=s.size()){
                string str = s.substr(rt,m);
                rt += m;
                if(freq.count(str)){
                    win[str] += 1;
                    cnt += 1;
                    while(win[str]>freq[str]){
                        string tmpw = s.substr(lft,m);
                        win[tmpw] -= 1;
                        cnt -= 1;
                        lft += m;
                    }
                    if(cnt==n){
                        ans.push_back(lft);
                    }
                }else{
                    win.clear();
                    cnt = 0;
                    lft = rt;
                }
            }
        }
        return ans;
    }
};
