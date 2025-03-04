// Linear Search O(n) 

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = -1, index = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>max){
                max = arr[i];
                index = i;
            }
        }
        return index;
    }
};
