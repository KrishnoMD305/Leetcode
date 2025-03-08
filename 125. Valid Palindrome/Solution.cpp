// Checking one by one


class Solution {
public:
    bool isAlp(char ch){
        
        if((tolower(ch)>='a' && tolower(ch)<='z') || (ch>='0' && ch<='9')){
            return true;
        }else{
            return false;
        }
    }

    bool isPalindrome(string s) {
        int start = 0, end = s.length()-1;
        while(start<end){
            if(!isAlp(s[start])){
                start++;
                continue;
            }
            if(!isAlp(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
