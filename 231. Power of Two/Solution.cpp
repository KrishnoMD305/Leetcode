class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        int x = log2(n);
        if(pow(2,x)==n){
            return true;
        }else{
            return false;
        }
    }
};
