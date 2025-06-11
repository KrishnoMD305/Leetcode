class Solution {
public:
    long long fact(int n,int k){
        long long p = 1;
        for(int i=1; i<=k; i++){
            p *= (n-k+i);
            p /= i;
        }
        return p;
    }
    int uniquePaths(int m, int n) {
        return fact(m+n-2,m-1);
    }
};
