// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// 1660450398 
class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        while(start<end){
            int mid = start+(end-start)/2;
            if(!isBadVersion(mid)){
                start = mid + 1;
            }else{
                end = mid;
            }
        }
        return end;
    }
};
