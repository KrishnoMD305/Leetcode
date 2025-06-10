class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1 && !s.count(n)){
            s.insert(n);
            long long sum = 0;
            while(n != 0){
                int d = n%10;
                sum += d*d;
                n /= 10;
            }
            n = sum;
        }
        if(n==1){
            return true;
        }else{
            return false;
        }
    }
};
