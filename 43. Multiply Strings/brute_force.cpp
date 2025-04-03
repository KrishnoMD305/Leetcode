class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        long long number1=0,number2=0;
        for(char c: num1){
            number1 = number1*10 + (c-'0');
        }
        for(char c: num2){
            number2 = number2*10 + (c-'0');
        }
        long long product = number1 * number2;
        string str = "";
        while(product != 0){
            str += (product%10)+'0';
            product /= 10;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
