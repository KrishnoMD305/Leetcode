// Applying Binary Exponential Algorithm
// It is efficient. O(log n)
// The number of digits in n are approxiamately log2(n) + 1

class Solution {
public:
    double myPow(double x, int n) {
        long bin=n;
        if(n<0){bin = -bin;}
        double r=1;
        while(bin>0){
            if(bin%2==1){r *= x;}
            x *=x; bin /= 2;
        }
        if(n<0){
            double a=1.0/r; return a;
        }else{
            return r;
        }
    }
};
