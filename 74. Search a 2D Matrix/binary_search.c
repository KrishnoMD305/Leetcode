bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int start = 0, end = matrixSize - 1;
    int r = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        int col = *matrixColSize - 1;
        
        if(matrix[mid][0]<=target && matrix[mid][col]>=target){
            r = mid;
            break;
        }else if(target < matrix[mid][0]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        
    }
    if(r == -1) return false;
    int s = 0, e = *matrixColSize - 1;
    while(s<=e){
        int m = s + (e-s)/2;
        if(matrix[r][m]==target){
            return true;
        }else if(matrix[r][m]<target){
            s = m+1;
        }else{
            e = m - 1;
        }
    }
    return false;
}
