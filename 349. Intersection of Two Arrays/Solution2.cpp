// 1660468755 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        set<int> s1,s2; 
        for(int i : nums1){s1.insert(i);}
        for(int i : nums2){s2.insert(i);}
        auto i=s1.begin(), j=s2.begin();
        while(i!=s1.end() && j!=s2.end()){
            if(*i == *j){result.push_back(*i);}
            if(*i < *j){i++;}
            else{j++;}
        }
        return result;
    }
};
