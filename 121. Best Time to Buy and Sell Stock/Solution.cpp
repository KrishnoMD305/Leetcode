// Time Complexity: O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=INT_MAX;
        int max=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<profit){ // min(prices[i],profit);
                profit=prices[i];
            }
            if(prices[i]-profit > max){ // max(max,prices[i]-profit);
                max=prices[i]-profit;
            }

        }
        
        return max;
    }
};

//There is also a solution of O(n^2) which will give TLE
/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        for(int i=0;i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                int m=prices[j]-prices[i];
                if(m>0 && m>p){
                    p=m;
                }
            }
        }
        return p;
    }
}; */
