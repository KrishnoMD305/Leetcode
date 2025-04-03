class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int m = num1.size(), n = num2.size();
        vector<int> p(m+n,0);
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int multi = (num1[i]-'0') * (num2[j]-'0');
                int sum = multi + p[i+j+1];
                p[i+j+1] = sum%10;
                p[i+j] += sum/10;
            }
        }
        string ans = "";
        bool lead_z = true;
        for(int numb : p){
            if(numb != 0){
                lead_z = false;
            }
            if(!lead_z){
                ans += (numb + '0');
            }
        }
        return ans;
    }
};
