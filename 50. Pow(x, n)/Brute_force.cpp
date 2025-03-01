// It will give TLE
// Because the solution is O(n) and for the worst case the constraint is 2^31
// So if n=2^31 then it will exceed the 10^8 operation which will produce TLE

class Solution {
public:
    double myPow(double x, int n) {
        double p=1;
        for(long long i=1; i<=abs(n); i++){
            p *= x;
        }
        if(n>0){
            return p;
        }else{
            double r = 1.0/p;
            return r;
        }
    }
};
