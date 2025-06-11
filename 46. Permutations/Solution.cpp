class Solution {
public:
    void perm(vector<int> v,int a,vector<vector<int>> &re){
        if(v.size()==a){
            re.push_back(v);
            return;
        }
        for(int i=a; i<v.size(); i++){
            swap(v[a],v[i]);
            perm(v,a+1,re);
            swap(v[a],v[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> re;
        perm(nums,0,re);
        return re;
    }
};
