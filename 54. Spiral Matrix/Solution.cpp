class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int s_row = 0, s_col = 0, e_row = matrix.size()-1, e_col = matrix[0].size()-1;
        vector<int> r;
        while(s_row<=e_row && s_col<=e_col){
            for(int i=s_col; i<=e_col; i++){
                r.push_back(matrix[s_row][i]);
            }
            s_row++;
            for(int i = s_row; i<=e_row; i++){
                r.push_back(matrix[i][e_col]);
            }
            e_col--;
            if (s_row <= e_row) {
                for (int i = e_col; i >= s_col; i--) {
                    r.push_back(matrix[e_row][i]);
                }
                e_row--;
            }
            if (s_col <= e_col) {
                for (int i = e_row; i >= s_row; i--) {
                    r.push_back(matrix[i][s_col]);
                }
                s_col++;
            }
        }
        return r;
    }
};
