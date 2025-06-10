class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream split(s);
        vector<string> words;
        string w;
        while(split>>w){words.push_back(w);}
        if(words.size() != pattern.size()){return false;}
        unordered_map<char,string> char_str;
        unordered_map<string,char> str_char;
        for(int i=0; i<pattern.size(); i++){
            char chr = pattern[i];
            string sr = words[i];
            if(char_str.count(chr)){if(char_str[chr] != sr){return false;}}
            else{char_str[chr] = sr;}
            if(str_char.count(sr)){if(str_char[sr] != chr){return false;}}
            else{str_char[sr] = chr;}
        }
        return true;
    }
};
