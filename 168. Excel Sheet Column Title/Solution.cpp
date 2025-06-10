class Solution {
public:
    string convertToTitle(int col) {
        string tit = "";
        while(col>0){
            col -= 1;
            tit += ((col%26)+'A');
            col /= 26;
        }
        reverse(tit.begin(), tit.end());
        return tit;
    }
};
