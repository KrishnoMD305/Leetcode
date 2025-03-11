class Solution {
public:
    
    int countPrimes(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 0;
        }
        vector<bool> p(n+1,true);
        int count = 0;
        for(int i=2; i<n; i++){
            if(p[i]){
                count++;
                for(int j=2*i; j<n; j+=i){
                    p[j] = false;
                }
            }
        }
        return count;
    }
};
