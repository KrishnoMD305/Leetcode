// At first search the exact row by binary search
// Then search the target element in that row

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, end = matrix.size()-1;
        int r = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            int c = matrix[mid].size()-1;
            if(matrix[mid][0]<=target && target<=matrix[mid][c]){
                r = mid;
                break;
            }else if(target<matrix[mid][0]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        if(r==-1) return false;
        int s = 0, e = matrix[r].size()-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(matrix[r][m]==target){
                return true;
            }else if(matrix[r][m]>target){
                e = m-1;
            }else{
                s = m+1;
            }
        }
        return false;
    }
};
