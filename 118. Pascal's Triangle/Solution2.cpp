class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> t;
        for(int i=0;i<numRows; i++){
            vector<int> r;
            r.push_back(1);
            for(int j=1; j<=i; j++){
                int g = r[j-1] * (i-j+1)/j;
                r.push_back(g);
            }
            t.push_back(r);
        }
        return t;
    }
};
