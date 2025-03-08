// Repeatedly find the substring and erasing them

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)<s.size()){
            int i = s.find(part);
            int n = part.size();
            s.erase(s.begin()+i, s.begin()+i+n);
        }
        return s;
    }
};
