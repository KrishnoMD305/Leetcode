// Time Complexity: O (n)  Space Complexity: O(1)
// Suppose the next lexographic permutation of  1 2 3 5 4 is 1 2 3 4 3 5. Observable matter is 1 and 2 are in the same position.
/* How to determine that ? 
Ans: We have to check backward. See that A[previous] > A[current]. The element that doesn't follow the condition is called pivot. So the change will happen from pivot 
to the last index. 
*/
// 1. find pivot.
// 2. find the right most element of the pivot. Then swap it with it.
// 3. reverse from (pivot+1) to (n-1).


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                pivot = i-1;
                break;
            }
        }
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=nums.size()-1; i>pivot; i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        reverse(nums.begin()+pivot+1, nums.end());
    }
};
