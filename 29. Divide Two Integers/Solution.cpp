// Krishno_MD_KUET_CSE
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        long divis = abs((long)divisor);
        long divid = abs((long)dividend);
        long quotent = 0;
        while(divid>=divis){
            long temp = divis, multiple = 1;
            while(divid >= (temp<<1)){
                temp <<= 1;
                multiple <<= 1;
            }
            divid -= temp;
            quotent += multiple;
        }
        if(divisor<0 && dividend<0){
            return quotent;
        }else if(divisor<0 || dividend<0){
            return -quotent;
        }else{
            return quotent;
        }
    }
};
