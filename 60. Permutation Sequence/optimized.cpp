class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> num;
        for(int i=1; i<n; i++){
            num.push_back(i);
            fact = fact*i;
        }
        num.push_back(n);
        string ans = "";
        k = k-1;
        while(true){
            ans += to_string(num[k/fact]);
            num.erase(num.begin()+(k/fact));
            if(num.size()==0){
                break;
            }
            k = k % fact;
            fact = fact / num.size();
        }
        return ans;
    }
};
