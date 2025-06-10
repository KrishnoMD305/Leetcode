class Solution {
    public:
        int titleToNumber(string col) {
            int co = 0;
            for(int i=0; i<col.size(); i++){
                int dig = col[i]-'A'+1;
                co = 26*co + dig;
            }
            return co;
        }
    };
