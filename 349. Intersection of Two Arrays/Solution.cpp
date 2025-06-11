// 1660461008
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp;
        for(int i : nums1){
            sort(nums2.begin(),nums2.end());
            int start=0,end=nums2.size()-1;
            while(start<=end){
                int mid = (start+end)/2;
                if(nums2[mid]==i){
                    tmp.insert(i);
                    break;
                }else if(nums2[mid]>i){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
        }
        vector<int> result;
        for(auto i : tmp){
            result.push_back(i);
        }
        return result;
    }
};
