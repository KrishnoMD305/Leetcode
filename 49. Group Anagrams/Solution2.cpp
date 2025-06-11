class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ang;
        for(string &s : strs){
            string k = s;
            sort(k.begin(),k.end());
            ang[k].push_back(s);
        }
        vector<vector<string>> result;
        for(auto &ff : ang){
            result.push_back(ff.second);
        }
        return result;
    }
};
