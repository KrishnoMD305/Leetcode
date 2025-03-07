// It is the bruteforce method. Simply we are finding all the combination, then we search for our desired algorithm.
// It will give TLE according to the direction that has been told in question

class Solution {
public:
    vector<vector<int>> permutation(vector<int> &arr){
        if(arr.size() <= 1){
            return {arr};
        }
        vector<vector<int>> result;
        for(int i=0; i<arr.size(); i++){
            int current = arr[i];
            vector<int> remains;
            for(int j=0; j<arr.size(); j++){
                if(j!=i){
                    remains.push_back(arr[j]);
                }
            }
            vector<vector<int>> perm = permutation(remains);
            for(int k=0; k<perm.size(); k++){
                vector<int> ne = {current};
                ne.insert(ne.end(), perm[k].begin(), perm[k].end());
                result.push_back(ne);
            } 
        }
        return result;
    }



    void nextPermutation(vector<int>& nums) {
        vector<int> t = nums;
        vector<int> r;
        sort(nums.begin(), nums.end());
        vector<vector<int>> permute = permutation(nums);
        for(int i=0; i<permute.size(); i++){
            if(permute[i]==t){
                if(i==permute.size()-1){
                    r = permute[0];
                }else{
                    r = permute[i+1];
                }
            }
        }
        for(int i=0; i<r.size(); i++){
            nums[i] = r[i];
        }
    }
};
