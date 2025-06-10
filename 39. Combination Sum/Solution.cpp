class Solution {
public:
    void generator(int i, vector<int> arr, int target, vector<vector<int>> &ans, vector<int> temp){
        if(i==arr.size()){
            if(target==0){
                ans.push_back(temp);

            }
            return;
        }
        if(arr[i]<=target){
            temp.push_back(arr[i]);
            generator(i,arr,target-arr[i],ans,temp);
            temp.pop_back();
        }
        generator(i+1,arr,target,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> te;
        generator(0,candidates,target,result,te);
        return result;
    }
};
